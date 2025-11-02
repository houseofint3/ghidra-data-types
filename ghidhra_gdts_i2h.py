#!/usr/bin/env python3
"""
Simple parser that applies CyberChef regex operations to a file.
"""

import re
import sys


def apply_regex_operations(content):
    """Apply the three regex find/replace operations from CyberChef."""
    
    # Operation 1: Remove #pragma directives
    # Pattern: #pragma[^\n]+\n
    # Replace with: empty string
    print("Applying Operation 1: Removing #pragma directives...")
    before = len(re.findall(r'#pragma[^\n]+\n', content))
    content = re.sub(r'#pragma[^\n]+\n', '', content)
    print(f"  Removed {before} #pragma lines")
    
    # Operation 2: Replace __forceinline/__inline functions with declarations
    # Pattern: (?:__forceinline|__inline)((?:[^{]*\n[^{]*))\{(?:\{[^{}]*\}|[^{}])*\}
    # Replace with: $1;
    # Flags: dotall enabled (makes . match newlines)
    print("Applying Operation 2: Replacing inline function definitions...")
    before = len(re.findall(
        r'(?:__forceinline|__inline)((?:[^{]*\n[^{]*))\{(?:\{[^{}]*\}|[^{}])*\}',
        content,
        flags=re.DOTALL
    ))
    content = re.sub(
        r'(?:__forceinline|__inline)((?:[^{]*\n[^{]*))\{(?:\{[^{}]*\}|[^{}])*\}',
        r'\1;',
        content,
        flags=re.DOTALL
    )
    print(f"  Replaced {before} inline function definitions")
    
    # Operation 3: Remove __declspec() attributes
    # Pattern: __declspec\([^\)]+\)+
    # Replace with: empty string (and clean up trailing whitespace/newlines)
    # Flags: dotall enabled
    print("Applying Operation 3: Removing __declspec() attributes...")
    before = len(re.findall(r'__declspec\([^\)]+\)+', content, flags=re.DOTALL))
    content = re.sub(
        r'__declspec\([^\)]+\)+\s*\n?',
        '',
        content,
        flags=re.DOTALL
    )
    print(f"  Removed {before} __declspec attributes")
    
    # Operation 4: Remove __C_ASSERT__ typedef lines
    # These are compile-time assertion macros that some parsers don't understand
    print("Applying Operation 4: Removing __C_ASSERT__ typedefs...")
    before = len(re.findall(r'typedef\s+char\s+__C_ASSERT__\s*\[.*?\]\s*;', content, flags=re.DOTALL))
    content = re.sub(
        r'typedef\s+char\s+__C_ASSERT__\s*\[.*?\]\s*;\s*\n?',
        '',
        content,
        flags=re.DOTALL
    )
    print(f"  Removed {before} __C_ASSERT__ lines")
    
    # Operation 5: Add missing Windows type definitions
    # Add common Windows types that may be used but not defined
    print("Applying Operation 5: Adding missing Windows type definitions...")
    
    # Define all common Windows types that might be missing
    windows_types = [
        ('BYTE', 'unsigned char'),
        ('CHAR', 'char'),
        ('UCHAR', 'unsigned char'),
        ('SHORT', 'short'),
        ('USHORT', 'unsigned short'),
        ('WORD', 'unsigned short'),
        ('WCHAR', 'unsigned short'),
        ('INT', 'int'),
        ('UINT', 'unsigned int'),
        ('LONG', 'long'),
        ('ULONG', 'unsigned long'),
        ('DWORD', 'unsigned long'),
        ('LONGLONG', 'long long'),
        ('ULONGLONG', 'unsigned long long'),
        ('INT8', 'signed char'),
        ('UINT8', 'unsigned char'),
        ('INT16', 'short'),
        ('UINT16', 'unsigned short'),
        ('INT32', 'int'),
        ('UINT32', 'unsigned int'),
        ('INT64', 'long long'),
        ('UINT64', 'unsigned long long'),
        ('PVOID', 'void*'),
        ('HANDLE', 'void*'),
        ('BOOL', 'int'),
        ('BOOLEAN', 'unsigned char'),
        ('NTAPI', ''),
        ('WINAPI', ''),
        ('CALLBACK', ''),
    ]
    
    # Check which types are used but not defined, and add them
    types_added = []
    calling_conventions = {'NTAPI', 'WINAPI', 'CALLBACK'}
    
    for type_name, type_def in windows_types:
        if type_name in content and not re.search(rf'typedef\s+[\w\s\*]+\s+{type_name}\s*;', content):
            if type_name in calling_conventions:
                # Define calling conventions as empty macros
                content = f'#define {type_name}\n' + content
            else:
                content = f'typedef {type_def} {type_name};\n' + content
            types_added.append(type_name)
    
    if types_added:
        print(f"  Added typedef definitions for: {', '.join(types_added)}")
    else:
        print("  No missing Windows types found")
    
    # Operation 6: Fix malformed function declarations
    # Fix cases where function name is on separate line from return type
    print("Applying Operation 6: Fixing malformed function declarations...")
    
    # Pattern to match return_type CALLING_CONVENTION\nfunction_name\n(
    # and fix it to return_type CALLING_CONVENTION function_name(
    before = len(re.findall(r'(\w+(?:\s*\*)?)\s+(NTAPI|WINAPI|__stdcall|__cdecl)\s*\n\s*(\w+)\s*\n\s*\(', content, flags=re.MULTILINE))
    content = re.sub(
        r'(\w+(?:\s*\*)?)\s+(NTAPI|WINAPI|__stdcall|__cdecl)\s*\n\s*(\w+)\s*\n\s*\(',
        r'\1 \2 \3(',
        content,
        flags=re.MULTILINE
    )
    print(f"  Fixed {before} malformed function declarations")
    
    return content


def main():
    if len(sys.argv) != 3:
        print("Usage: python parser.py <input_file> <output_file>")
        sys.exit(1)
    
    input_file = sys.argv[1]
    output_file = sys.argv[2]
    
    try:
        # Read input file
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        print(f"Read {len(content)} characters from {input_file}")
        
        # Apply regex operations
        processed_content = apply_regex_operations(content)
        
        # Write output file
        with open(output_file, 'w', encoding='utf-8') as f:
            f.write(processed_content)
        
        print(f"\nSuccessfully processed {input_file} -> {output_file}")
        print(f"Output size: {len(processed_content)} characters")
    
    except FileNotFoundError:
        print(f"Error: Input file '{input_file}' not found")
        sys.exit(1)
    except Exception as e:
        print(f"Error: {e}")
        import traceback
        traceback.print_exc()
        sys.exit(1)


if __name__ == "__main__":
    main()