#define NTAPI
typedef unsigned char BOOLEAN;
typedef int BOOL;
typedef void* HANDLE;
typedef void* PVOID;
typedef unsigned int UINT32;
typedef int INT32;
typedef unsigned long long ULONGLONG;
typedef long long LONGLONG;
typedef unsigned long DWORD;
typedef unsigned long ULONG;
typedef long LONG;
typedef unsigned int UINT;
typedef int INT;
typedef unsigned short WCHAR;
typedef unsigned short WORD;
typedef unsigned short USHORT;
typedef short SHORT;
typedef unsigned char UCHAR;
typedef char CHAR;









































































































































































































































































































































 








































































































    







    
    


        
            
        


    


































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
    

    
    

























































































































































































































































    
    
























































































































































































































































































































































































































































































































    


        
    





    


        
    




    





    












    
    
        typedef unsigned __int64  uintptr_t;
    





    
    


        typedef char* va_list;
    





    











    
    






























































    void __cdecl __va_start(va_list* , ...);

    
    



    








































    































    


    




__pragma(pack(push, 8))




    


        
    

















    




        
    



    


        
    







    
    





    












    





    



    



      
    







    typedef unsigned __int64 size_t;
    typedef __int64          ptrdiff_t;
    typedef __int64          intptr_t;













    typedef _Bool __vcrt_bool;




    



    



    




    
    typedef unsigned short wchar_t;



    


        
    



    

















    













    



    


        
    



    


        
    



    


        
    



    


        
    


















    
        
    









    










    


        
    








    










    


        




    







    
        
    






    void __cdecl __security_init_cookie(void);

    






        void __cdecl __security_check_cookie(  uintptr_t _StackCookie);
        void __cdecl __report_gsfailure(  uintptr_t _StackCookie);
    


extern uintptr_t __security_cookie;


    
    
    


__pragma(pack(pop))











    
        
        
            
        












    





    



    
        
    




















    


        
    




    















    



    











        
    



    


        
    




__pragma(pack(push, 8))







    


        
    







    



    


        
    







    



    









    






    





    










    














    


        
    





    





    





    



    


        
    





























    typedef _Bool __crt_bool;















    
        


            
        
    




















    


        
    







    



 






  


   
  
 



 


   
 








    void __cdecl _invalid_parameter(
          wchar_t const*,
          wchar_t const*,
          wchar_t const*,
                unsigned int,
                uintptr_t
        );


void __cdecl _invalid_parameter_noinfo(void);
void __cdecl _invalid_parameter_noinfo_noreturn(void);

void __cdecl _invoke_watson(
      wchar_t const* _Expression,
      wchar_t const* _FunctionName,
      wchar_t const* _FileName,
            unsigned int _LineNo,
            uintptr_t _Reserved);


    
        

    



























    









    


        


    










    






        
    



    


        
    








































    







    





    


        


            
        
    













    


        



    



    
        
    





    
        
        
        
    





    
        
              
        


    





    
        
    





    
        
    







    









typedef int                           errno_t;
typedef unsigned short                wint_t;
typedef unsigned short                wctype_t;
typedef long                          __time32_t;
typedef __int64                       __time64_t;

typedef struct __crt_locale_data_public
{
      unsigned short const* _locale_pctype;
      int _locale_mb_cur_max;
               unsigned int _locale_lc_codepage;
} __crt_locale_data_public;

typedef struct __crt_locale_pointers
{
    struct __crt_locale_data*    locinfo;
    struct __crt_multibyte_data* mbcinfo;
} __crt_locale_pointers;

typedef __crt_locale_pointers* _locale_t;

typedef struct _Mbstatet
{ 
    unsigned long _Wchar;
    unsigned short _Byte, _State;
} _Mbstatet;

typedef _Mbstatet mbstate_t;










    


        typedef __time64_t time_t;
    




    



    typedef size_t rsize_t;











    

















































































































































        
        
        
        
        
        
        
        
        
        
        
        

    













































































    















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































        
        
        
        

        

            


            


            


            


            


            


            


            


            



            



            


            


            


            


            


            


            


            


            


            


            



            



            



            


            



            




            

            




            

            




            

            




            

            




            

            




            

            




            

            




            

        












































    


__pragma(pack(pop))




























__pragma(pack(push, 8))









    



    


        
    

















    















    
















    
    
       
    
    unsigned __int64* __cdecl __local_stdio_printf_options(void)
    ;

    
    
       
    
    unsigned __int64* __cdecl __local_stdio_scanf_options(void)
    ;

























__pragma(pack(pop))





__pragma(pack(push, 8))







    
    typedef struct _iobuf
    {
        void* _Placeholder;
    } FILE;


FILE* __cdecl __acrt_iob_func(unsigned _Ix);










    
    
    
    
    
    
    wint_t __cdecl fgetwc(
          FILE* _Stream
        );

    
    wint_t __cdecl _fgetwchar(void);

    
    wint_t __cdecl fputwc(
             wchar_t _Character,
          FILE*   _Stream);

    
    wint_t __cdecl _fputwchar(
          wchar_t _Character
        );

     
    wint_t __cdecl getwc(
          FILE* _Stream
        );

     
    wint_t __cdecl getwchar(void);


    
     
    wchar_t* __cdecl fgetws(
          wchar_t* _Buffer,
                                  int      _BufferCount,
                               FILE*    _Stream
        );

    
    int __cdecl fputws(
           wchar_t const* _Buffer,
          FILE*          _Stream
        );

    
     
    wchar_t* __cdecl _getws_s(
          wchar_t* _Buffer,
                                  size_t   _BufferCount
        );

    

    
    wint_t __cdecl putwc(
             wchar_t _Character,
          FILE*   _Stream
        );

    
    wint_t __cdecl putwchar(
          wchar_t _Character
        );

    
    int __cdecl _putws(
          wchar_t const* _Buffer
        );

    
    wint_t __cdecl ungetwc(
             wint_t _Character,
          FILE*  _Stream
        );

     
    FILE * __cdecl _wfdopen(
            int            _FileHandle,
          wchar_t const* _Mode
        );

      FILE* __cdecl _wfopen(
          wchar_t const* _FileName,
          wchar_t const* _Mode
        );

    
    errno_t __cdecl _wfopen_s(
          FILE**         _Stream,
                             wchar_t const* _FileName,
                             wchar_t const* _Mode
        );

     
    FILE* __cdecl _wfreopen(
           wchar_t const* _FileName,
           wchar_t const* _Mode,
          FILE*          _OldStream
        );

    
    errno_t __cdecl _wfreopen_s(
          FILE**         _Stream,
                             wchar_t const* _FileName,
                             wchar_t const* _Mode,
                            FILE*          _OldStream
        );

     
    FILE* __cdecl _wfsopen(
          wchar_t const* _FileName,
          wchar_t const* _Mode,
            int            _ShFlag
        );

    void __cdecl _wperror(
          wchar_t const* _ErrorMessage
        );

    

         
        FILE* __cdecl _wpopen(
              wchar_t const* _Command,
              wchar_t const* _Mode
            );

    

    int __cdecl _wremove(
          wchar_t const* _FileName
        );

    
    

     
    wchar_t* __cdecl _wtempnam(
          wchar_t const* _Directory,
          wchar_t const* _FilePrefix
        );

    

     
    
    errno_t __cdecl _wtmpnam_s(
          wchar_t* _Buffer,
                                  size_t   _BufferCount
        );

    

    wchar_t* __cdecl _wtmpnam(  wchar_t *_Buffer);



    
    
    
    
    
    
    wint_t __cdecl _fgetwc_nolock(
          FILE* _Stream
        );

    
    wint_t __cdecl _fputwc_nolock(
             wchar_t _Character,
          FILE*   _Stream
        );

    
    wint_t __cdecl _getwc_nolock(
          FILE* _Stream
        );

    
    wint_t __cdecl _putwc_nolock(
             wchar_t _Character,
          FILE*   _Stream
        );

    
    wint_t __cdecl _ungetwc_nolock(
             wint_t _Character,
          FILE*  _Stream
        );

    







    
    





    
    
    
    
    
    
    int __cdecl __stdio_common_vfwprintf(
                                             unsigned __int64 _Options,
                                          FILE*            _Stream,
            wchar_t const*   _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

    
    int __cdecl __stdio_common_vfwprintf_s(
                                             unsigned __int64 _Options,
                                          FILE*            _Stream,
            wchar_t const*   _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

    
    int __cdecl __stdio_common_vfwprintf_p(
                                             unsigned __int64 _Options,
                                          FILE*            _Stream,
            wchar_t const*   _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

    
     int __cdecl _vfwprintf_l(
                                          FILE*          const _Stream,
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    


    ;
    

    
     int __cdecl vfwprintf(
                                FILE*          const _Stream,
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    


    ;
    

    
     int __cdecl _vfwprintf_s_l(
                                          FILE*          const _Stream,
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    


    ;
    

    

        
         int __cdecl vfwprintf_s(
                                    FILE*          const _Stream,
                wchar_t const* const _Format,
                                          va_list              _ArgList
            )
    


        ;
    

    

    
     int __cdecl _vfwprintf_p_l(
                                          FILE*          const _Stream,
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    


    ;
    

    
     int __cdecl _vfwprintf_p(
                                FILE*          const _Stream,
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    


    ;
    

    
     int __cdecl _vwprintf_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    


    ;
    

    
     int __cdecl vwprintf(
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    


    ;
    

    
     int __cdecl _vwprintf_s_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    


    ;
    

    

        
         int __cdecl vwprintf_s(
                wchar_t const* const _Format,
                                          va_list              _ArgList
            )
    


        ;
    

    

    
     int __cdecl _vwprintf_p_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    


    ;
    

    
     int __cdecl _vwprintf_p(
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    


    ;
    

    
     int __cdecl _fwprintf_l(
                                          FILE*          const _Stream,
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
        ...)
    


    ;
    

    
     int __cdecl fwprintf(
                                FILE*          const _Stream,
            wchar_t const* const _Format,
        ...)
    


    ;
    

    
     int __cdecl _fwprintf_s_l(
                                          FILE*          const _Stream,
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
        ...)
    


    ;
    

    

        
         int __cdecl fwprintf_s(
                                    FILE*          const _Stream,
                wchar_t const* const _Format,
            ...)
    


        ;
    

    

    
     int __cdecl _fwprintf_p_l(
                                          FILE*          const _Stream,
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
        ...)
    


    ;
    

    
     int __cdecl _fwprintf_p(
                                FILE*          const _Stream,
            wchar_t const* const _Format,
        ...)
    


    ;
    

    
     int __cdecl _wprintf_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
        ...)
    


    ;
    

    
     int __cdecl wprintf(
            wchar_t const* const _Format,
        ...)
    


    ;
    

    
     int __cdecl _wprintf_s_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
        ...)
    


    ;
    

    

        
         int __cdecl wprintf_s(
                wchar_t const* const _Format,
            ...)
    


        ;
    

    

    
     int __cdecl _wprintf_p_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
        ...)
    


    ;
    

    
     int __cdecl _wprintf_p(
            wchar_t const* const _Format,
        ...)
    


    ;
    


    
    
    
    
    
    
    int __cdecl __stdio_common_vfwscanf(
                                            unsigned __int64 _Options,
                                         FILE*            _Stream,
            wchar_t const*   _Format,
                                        _locale_t        _Locale,
                                               va_list          _ArgList
        );

    
     int __cdecl _vfwscanf_l(
          FILE*                                const _Stream,
            wchar_t const* const _Format,
                               _locale_t      const _Locale,
                                      va_list              _ArgList
        )
    


    ;
    

    
     int __cdecl vfwscanf(
          FILE*                                const _Stream,
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    


    ;
    

    
     int __cdecl _vfwscanf_s_l(
                                FILE*          const _Stream,
            wchar_t const* const _Format,
                               _locale_t      const _Locale,
                                      va_list              _ArgList
        )
    


    ;
    

    

        
         int __cdecl vfwscanf_s(
                                    FILE*          const _Stream,
                wchar_t const* const _Format,
                                          va_list              _ArgList
            )
    


        ;
    

    

     int __cdecl _vwscanf_l(
            wchar_t const* const _Format,
                               _locale_t      const _Locale,
                                      va_list              _ArgList
        )
    


    ;
    

    
     int __cdecl vwscanf(
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    


    ;
    

    
     int __cdecl _vwscanf_s_l(
            wchar_t const* const _Format,
                               _locale_t      const _Locale,
                                      va_list              _ArgList
        )
    


    ;
    

    

        
         int __cdecl vwscanf_s(
                wchar_t const* const _Format,
                                          va_list              _ArgList
            )
    


        ;
    

    

     int __cdecl _fwscanf_l(
                                         FILE*          const _Stream,
            wchar_t const* const _Format,
                                        _locale_t      const _Locale,
        ...)
    


    ;
    

      int __cdecl fwscanf(
                               FILE*          const _Stream,
            wchar_t const* const _Format,
        ...)
    


    ;
    

    
     int __cdecl _fwscanf_s_l(
                                           FILE*          const _Stream,
            wchar_t const* const _Format,
                                          _locale_t      const _Locale,
        ...)
    


    ;
    

    

        
         int __cdecl fwscanf_s(
                                     FILE*          const _Stream,
                wchar_t const* const _Format,
            ...)
    


        ;
    

    

     int __cdecl _wscanf_l(
            wchar_t const* const _Format,
                                        _locale_t      const _Locale,
        ...)
    


    ;
    

      int __cdecl wscanf(
            wchar_t const* const _Format,
        ...)
    


    ;
    

    
     int __cdecl _wscanf_s_l(
            wchar_t const* const _Format,
                                          _locale_t      const _Locale,
        ...)
    


    ;
    

    

        
         int __cdecl wscanf_s(
                wchar_t const* const _Format,
            ...)
    


        ;
    

    



    
    
    
    
    
    
        



    



     
    
    int __cdecl __stdio_common_vswprintf(
                                             unsigned __int64 _Options,
                 wchar_t*         _Buffer,
                                             size_t           _BufferCount,
            wchar_t const*   _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

     
    
    int __cdecl __stdio_common_vswprintf_s(
                                             unsigned __int64 _Options,
                     wchar_t*         _Buffer,
                                             size_t           _BufferCount,
            wchar_t const*   _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

     
    
    int __cdecl __stdio_common_vsnwprintf_s(
                                             unsigned __int64 _Options,
                 wchar_t*         _Buffer,
                                             size_t           _BufferCount,
                                             size_t           _MaxCount,
            wchar_t const*   _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

     
    
    int __cdecl __stdio_common_vswprintf_p(
                                             unsigned __int64 _Options,
                     wchar_t*         _Buffer,
                                             size_t           _BufferCount,
            wchar_t const*   _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

     
     int __cdecl _vsnwprintf_l(
            wchar_t*       const _Buffer,
                                                  size_t         const _BufferCount,
                 wchar_t const* const _Format,
                                              _locale_t      const _Locale,
                                                     va_list              _ArgList
        )
    


    ;
    

     
    
     int __cdecl _vsnwprintf_s_l(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                                                       size_t         const _MaxCount,
                      wchar_t const* const _Format,
                                                   _locale_t      const _Locale,
                                                          va_list              _ArgList
        )
    


    ;
    

     
    
     int __cdecl _vsnwprintf_s(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                                                       size_t         const _MaxCount,
                                wchar_t const* const _Format,
                                                          va_list              _ArgList
        )
    


    ;
    

    int __cdecl _snwprintf(    wchar_t *_Buffer,   size_t _BufferCount,     wchar_t const* _Format, ...); __inline   int __cdecl _vsnwprintf(    wchar_t *_Buffer,   size_t _BufferCount,     wchar_t const* _Format, va_list _Args);

     
     __inline int __cdecl _vsnwprintf(
            wchar_t*       _Buffer,
                                                  size_t         _BufferCount,
                           wchar_t const* _Format,
                                                     va_list        _ArgList
        )
    


    ;
    

    

     
    
     int __cdecl _vswprintf_c_l(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                      wchar_t const* const _Format,
                                                   _locale_t      const _Locale,
                                                          va_list              _ArgList
        )
    


    ;
    

     
    
     int __cdecl _vswprintf_c(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                                wchar_t const* const _Format,
                                                          va_list              _ArgList
        )
    


    ;
    

     
    
     int __cdecl _vswprintf_l(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                      wchar_t const* const _Format,
                                                   _locale_t      const _Locale,
                                                          va_list              _ArgList
        )
    


    ;
    

     
    
     int __cdecl __vswprintf_l(
                  wchar_t*       const _Buffer,
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    


    ;
    

     
    
     int __cdecl _vswprintf(
           wchar_t*       const _Buffer,
               wchar_t const* const _Format,
                                         va_list              _ArgList
        )
    


    ;
    

     
    
     int __cdecl vswprintf(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                      wchar_t const* const _Format,
                                                          va_list              _ArgList
        )
    


    ;
    

     
    
     int __cdecl _vswprintf_s_l(
           wchar_t*       const _Buffer,
                                                   size_t         const _BufferCount,
                  wchar_t const* const _Format,
                                               _locale_t      const _Locale,
                                                      va_list              _ArgList
        )
    


    ;
    

    

         
         int __cdecl vswprintf_s(
               wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                                wchar_t const* const _Format,
                                                          va_list              _ArgList
            )
    


        ;
    

    

    

     
    
     int __cdecl _vswprintf_p_l(
           wchar_t*       const _Buffer,
                                                   size_t         const _BufferCount,
                  wchar_t const* const _Format,
                                               _locale_t      const _Locale,
                                                      va_list              _ArgList
        )
    


    ;
    

     
    
     int __cdecl _vswprintf_p(
           wchar_t*       const _Buffer,
                                                   size_t         const _BufferCount,
                            wchar_t const* const _Format,
                                                      va_list              _ArgList
        )
    


    ;
    

     
     
     int __cdecl _vscwprintf_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    


    ;
    

     
     
     int __cdecl _vscwprintf(
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    


    ;
    

     
     
     int __cdecl _vscwprintf_p_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    


    ;
    

     
     
     int __cdecl _vscwprintf_p(
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    


    ;
    

     
    
     int __cdecl __swprintf_l(
                  wchar_t*       const _Buffer,
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
        ...)
    


    ;
    

     
    
     int __cdecl _swprintf_l(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                      wchar_t const* const _Format,
                                                   _locale_t      const _Locale,
        ...)
    


    ;
    

     
    
     int __cdecl _swprintf(
           wchar_t*       const _Buffer,
               wchar_t const* const _Format,
        ...)
    


    ;
    

     
    
     int __cdecl swprintf(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                                wchar_t const* const _Format,
        ...)
    


    ;
    

    int __cdecl __swprintf_l(   wchar_t *_Buffer,     wchar_t const* _Format,   _locale_t _Locale, ...); __inline   int __cdecl __vswprintf_l(   wchar_t *_Buffer,     wchar_t const* _Format,   _locale_t _Locale, va_list _Args);

    __inline   int __cdecl _swprintf(   wchar_t *_Buffer,     wchar_t const* _Format, ...); __inline   int __cdecl _vswprintf(   wchar_t *_Buffer,     wchar_t const* _Format, va_list _Args);

     
    
    __inline int __cdecl _swprintf_s_l(
           wchar_t*       const _Buffer,
                                                   size_t         const _BufferCount,
                  wchar_t const* const _Format,
                                               _locale_t      const _Locale,
        ...)
    


    ;
    

    

         
         int __cdecl swprintf_s(
               wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                                wchar_t const* const _Format,
            ...)
    


        ;
    

    

    

     
    
     int __cdecl _swprintf_p_l(
           wchar_t*       const _Buffer,
                                                   size_t         const _BufferCount,
                  wchar_t const* const _Format,
                                               _locale_t      const _Locale,
        ...)
    


    ;
    

     
    
     int __cdecl _swprintf_p(
           wchar_t*       const _Buffer,
                                                   size_t         const _BufferCount,
                            wchar_t const* const _Format,
        ...)
    


    ;
    

     
    
     int __cdecl _swprintf_c_l(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                      wchar_t const* const _Format,
                                                   _locale_t      const _Locale,
        ...)
    


    ;
    

     
    
     int __cdecl _swprintf_c(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                                wchar_t const* const _Format,
        ...)
    


    ;
    

     
     int __cdecl _snwprintf_l(
            wchar_t*       const _Buffer,
                                                  size_t         const _BufferCount,
                 wchar_t const* const _Format,
                                              _locale_t      const _Locale,
        ...)
    


    ;
    

     
    
     int __cdecl _snwprintf(
            wchar_t*       _Buffer,
                                                  size_t         _BufferCount,
                           wchar_t const* _Format,
        ...)
    


    ;
    

     
    
     int __cdecl _snwprintf_s_l(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                                                       size_t         const _MaxCount,
                      wchar_t const* const _Format,
                                                   _locale_t      const _Locale,
        ...)
    


    ;
    

     
    
     int __cdecl _snwprintf_s(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                                                       size_t         const _MaxCount,
                                wchar_t const* const _Format,
        ...)
    


    ;
    

    

     
     int __cdecl _scwprintf_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
        ...)
    


    ;
    

     
     
     int __cdecl _scwprintf(
            wchar_t const* const _Format,
        ...)
    


    ;
    

     
     
     int __cdecl _scwprintf_p_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
        ...)
    


    ;
    

     
     
     int __cdecl _scwprintf_p(
            wchar_t const* const _Format,
        ...)
    


    ;
    


    
        
        
                
        





















































            

    







    
    
    
    
    
     
    int __cdecl __stdio_common_vswscanf(
                                            unsigned __int64 _Options,
                  wchar_t const*   _Buffer,
                                            size_t           _BufferCount,
            wchar_t const*   _Format,
                                        _locale_t        _Locale,
                                               va_list          _ArgList
        );

     
    
     int __cdecl _vswscanf_l(
                                 wchar_t const* const _Buffer,
            wchar_t const* const _Format,
                               _locale_t      const _Locale,
                                      va_list              _ArgList
        )
    


    ;
    

     
    
     int __cdecl vswscanf(
                                 wchar_t const* _Buffer,
            wchar_t const* _Format,
                                      va_list        _ArgList
        )
    


    ;
    

     
    
     int __cdecl _vswscanf_s_l(
                                 wchar_t const* const _Buffer,
            wchar_t const* const _Format,
                               _locale_t      const _Locale,
                                      va_list              _ArgList
        )
    


    ;
    

    

         
        
         int __cdecl vswscanf_s(
                                     wchar_t const* const _Buffer,
                wchar_t const* const _Format,
                                          va_list              _ArgList
            )
    


        ;
    

    

    

     
     int __cdecl _vsnwscanf_l(
                  wchar_t const* const _Buffer,
                                            size_t         const _BufferCount,
            wchar_t const* const _Format,
                                        _locale_t      const _Locale,
                                               va_list              _ArgList
        )
    


    ;
    

     
    
     int __cdecl _vsnwscanf_s_l(
                    wchar_t const* const _Buffer,
                                              size_t         const _BufferCount,
            wchar_t const* const _Format,
                                          _locale_t      const _Locale,
                                                 va_list              _ArgList
        )
    


    ;
    

     
     int __cdecl _swscanf_l(
                                          wchar_t const* const _Buffer,
            wchar_t const* const _Format,
                                        _locale_t            _Locale,
        ...)
    


    ;
    

     
      int __cdecl swscanf(
                                wchar_t const* const _Buffer,
            wchar_t const* const _Format,
        ...)
    


    ;
    

     
    
     int __cdecl _swscanf_s_l(
                                            wchar_t const* const _Buffer,
            wchar_t const* const _Format,
                                          _locale_t      const _Locale,
        ...)
    


    ;
    

    

         
        
         int __cdecl swscanf_s(
                                      wchar_t const* const _Buffer,
                wchar_t const* const _Format,
            ...)
    


        ;
    

    

     
     int __cdecl _snwscanf_l(
                  wchar_t const* const _Buffer,
                                            size_t         const _BufferCount,
            wchar_t const* const _Format,
                                        _locale_t      const _Locale,
        ...)
    


    ;
    

     
     int __cdecl _snwscanf(
            wchar_t const* const _Buffer,
                                      size_t         const _BufferCount,
                wchar_t const* const _Format,
        ...)
    


    ;
    

     
    
     int __cdecl _snwscanf_s_l(
                    wchar_t const* const _Buffer,
                                              size_t         const _BufferCount,
            wchar_t const* const _Format,
                                          _locale_t      const _Locale,
        ...)
    


    ;
    

     
    
     int __cdecl _snwscanf_s(
             wchar_t const* const _Buffer,
                                       size_t         const _BufferCount,
               wchar_t const* const _Format,
        ...)
    


    ;
    

    




__pragma(pack(pop))





__pragma(pack(push, 8))































    
















    
    



typedef __int64 fpos_t;





    
    errno_t __cdecl _get_stream_buffer_pointers(
               FILE*   _Stream,
          char*** _Base,
          char*** _Pointer,
          int**   _Count
        );


    
    
    
    
    
    

        
        errno_t __cdecl clearerr_s(
              FILE* _Stream
            );

        
         
        errno_t __cdecl fopen_s(
              FILE**      _Stream,
                                     char const* _FileName,
                                     char const* _Mode
            );

        
         
        size_t __cdecl fread_s(
                void*  _Buffer,
                                    size_t _BufferSize,
                                                                            size_t _ElementSize,
                                                                            size_t _ElementCount,
                                                                         FILE*  _Stream
            );

        
        errno_t __cdecl freopen_s(
              FILE**      _Stream,
                                 char const* _FileName,
                                 char const* _Mode,
                                FILE*       _OldStream
            );

         
        char* __cdecl gets_s(
              char*   _Buffer,
                               rsize_t _Size
            );

        
        errno_t __cdecl tmpfile_s(
                FILE** _Stream
            );

         
        
        errno_t __cdecl tmpnam_s(
              char*   _Buffer,
                               rsize_t _Size
            );

    

    void __cdecl clearerr(
          FILE* _Stream
        );

     
    
    int __cdecl fclose(
          FILE* _Stream
        );

    
    int __cdecl _fcloseall(void);

     
    FILE* __cdecl _fdopen(
            int         _FileHandle,
          char const* _Mode
        );

     
    int __cdecl feof(
          FILE* _Stream
        );

     
    int __cdecl ferror(
          FILE* _Stream
        );

    
    int __cdecl fflush(
          FILE* _Stream
        );

     
    
    int __cdecl fgetc(
          FILE* _Stream
        );

    
    int __cdecl _fgetchar(void);

     
    
    int __cdecl fgetpos(
          FILE*   _Stream,
            fpos_t* _Position
        );

     
    
    char* __cdecl fgets(
          char* _Buffer,
                               int   _MaxCount,
                            FILE* _Stream
        );

     
    int __cdecl _fileno(
          FILE* _Stream
        );

    
    int __cdecl _flushall(void);

      FILE* __cdecl fopen(
          char const* _FileName,
          char const* _Mode
        );


     
    
    int __cdecl fputc(
             int   _Character,
          FILE* _Stream
        );

    
    int __cdecl _fputchar(
          int _Character
        );

     
    
    int __cdecl fputs(
           char const* _Buffer,
          FILE*       _Stream
        );

    
    size_t __cdecl fread(
          void*  _Buffer,
                                                      size_t _ElementSize,
                                                      size_t _ElementCount,
                                                   FILE*  _Stream
        );

     
      FILE* __cdecl freopen(
           char const* _FileName,
           char const* _Mode,
          FILE*       _Stream
        );

     
    FILE* __cdecl _fsopen(
          char const* _FileName,
          char const* _Mode,
            int         _ShFlag
        );

     
    
    int __cdecl fsetpos(
          FILE*         _Stream,
             fpos_t const* _Position
        );

     
    
    int __cdecl fseek(
          FILE* _Stream,
             long  _Offset,
             int   _Origin
        );

     
    
    int __cdecl _fseeki64(
          FILE*   _Stream,
             __int64 _Offset,
             int     _Origin
        );

     
     
    long __cdecl ftell(
          FILE* _Stream
        );

     
     
    __int64 __cdecl _ftelli64(
          FILE* _Stream
        );

    
    size_t __cdecl fwrite(
          void const* _Buffer,
                                                    size_t      _ElementSize,
                                                    size_t      _ElementCount,
                                                 FILE*       _Stream
        );

     
     
    int __cdecl getc(
          FILE* _Stream
        );

     
    int __cdecl getchar(void);

     
    int __cdecl _getmaxstdio(void);

    

     
    int __cdecl _getw(
          FILE* _Stream
        );

    void __cdecl perror(
          char const* _ErrorMessage
        );

    

         
        
        int __cdecl _pclose(
              FILE* _Stream
            );

         
        FILE* __cdecl _popen(
              char const* _Command,
              char const* _Mode
            );

    

     
    
    int __cdecl putc(
             int   _Character,
          FILE* _Stream
        );

    
    int __cdecl putchar(
          int _Character
        );

    
    int __cdecl puts(
          char const* _Buffer
        );

     
    
    int __cdecl _putw(
             int   _Word,
          FILE* _Stream
        );

    int __cdecl remove(
          char const* _FileName
        );

     
    int __cdecl rename(
          char const* _OldFileName,
          char const* _NewFileName
        );

    int __cdecl _unlink(
          char const* _FileName
        );

    

        int __cdecl unlink(
              char const* _FileName
            );

    

    void __cdecl rewind(
          FILE* _Stream
        );

    
    int __cdecl _rmtmp(void);

    void __cdecl setbuf(
                                                      FILE* _Stream,
            char* _Buffer
        );

    
    int __cdecl _setmaxstdio(
          int _Maximum
        );

     
    
    int __cdecl setvbuf(
                               FILE*  _Stream,
            char*  _Buffer,
                                  int    _Mode,
                                  size_t _Size
        );

    




     
    char* __cdecl _tempnam(
          char const* _DirectoryName,
          char const* _FilePrefix
        );

    



      FILE* __cdecl tmpfile(void);

    

char* __cdecl tmpnam(  char *_Buffer);

     
    
    int __cdecl ungetc(
             int   _Character,
          FILE* _Stream
        );



    
    
    
    
    
    void __cdecl _lock_file(
          FILE* _Stream
        );

    void __cdecl _unlock_file(
          FILE* _Stream
        );

     
    
    int __cdecl _fclose_nolock(
          FILE* _Stream
        );

     
    
    int __cdecl _fflush_nolock(
          FILE* _Stream
        );

     
    
    int __cdecl _fgetc_nolock(
          FILE* _Stream
        );

     
    
    int __cdecl _fputc_nolock(
             int   _Character,
          FILE* _Stream
        );

    
    size_t __cdecl _fread_nolock(
          void*  _Buffer,
                                                      size_t _ElementSize,
                                                      size_t _ElementCount,
                                                   FILE*  _Stream
        );

    
     
    size_t __cdecl _fread_nolock_s(
          void*  _Buffer,
                              size_t _BufferSize,
                                                                      size_t _ElementSize,
                                                                      size_t _ElementCount,
                                                                   FILE*  _Stream
        );

    
    int __cdecl _fseek_nolock(
          FILE* _Stream,
             long  _Offset,
             int   _Origin
        );

    
    int __cdecl _fseeki64_nolock(
          FILE*   _Stream,
             __int64 _Offset,
             int     _Origin
        );

     
    long __cdecl _ftell_nolock(
          FILE* _Stream
        );

     
    __int64 __cdecl _ftelli64_nolock(
          FILE* _Stream
        );

    
    size_t __cdecl _fwrite_nolock(
          void const* _Buffer,
                                                    size_t      _ElementSize,
                                                    size_t      _ElementCount,
                                                 FILE*       _Stream
        );

    
    int __cdecl _getc_nolock(
          FILE* _Stream
        );

    
    int __cdecl _putc_nolock(
             int   _Character,
          FILE* _Stream
        );

    
    int __cdecl _ungetc_nolock(
             int   _Character,
          FILE* _Stream
        );

    
    
    
    



    


















    int* __cdecl __p__commode(void);

    


        
    



    
    



    
    
    
    
    
    int __cdecl __stdio_common_vfprintf(
                                             unsigned __int64 _Options,
                                          FILE*            _Stream,
            char const*      _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

    int __cdecl __stdio_common_vfprintf_s(
                                             unsigned __int64 _Options,
                                          FILE*            _Stream,
            char const*      _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

     
    int __cdecl __stdio_common_vfprintf_p(
                                             unsigned __int64 _Options,
                                          FILE*            _Stream,
            char const*      _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

    
     int __cdecl _vfprintf_l(
           FILE*       const _Stream,
            char const* const _Format,
          _locale_t   const _Locale,
                 va_list           _ArgList
        )
    


    ;
    

    
     int __cdecl vfprintf(
                                FILE*       const _Stream,
            char const* const _Format,
                                      va_list           _ArgList
        )
    


    ;
    

    
     int __cdecl _vfprintf_s_l(
           FILE*       const _Stream,
            char const* const _Format,
          _locale_t   const _Locale,
                 va_list           _ArgList
        )
    


    ;
    

    

        
         int __cdecl vfprintf_s(
                                    FILE*       const _Stream,
                char const* const _Format,
                                          va_list           _ArgList
            )
    


        ;
    

    

    
     int __cdecl _vfprintf_p_l(
           FILE*       const _Stream,
            char const* const _Format,
          _locale_t   const _Locale,
                 va_list           _ArgList
        )
    


    ;
    

    
     int __cdecl _vfprintf_p(
                                FILE*       const _Stream,
            char const* const _Format,
                                      va_list           _ArgList
        )
    


    ;
    

    
     int __cdecl _vprintf_l(
            char const* const _Format,
                                         _locale_t   const _Locale,
                                                va_list           _ArgList
        )
    


    ;
    

    
     int __cdecl vprintf(
            char const* const _Format,
                                      va_list           _ArgList
        )
    


    ;
    

    
     int __cdecl _vprintf_s_l(
            char const* const _Format,
                                         _locale_t   const _Locale,
                                                va_list           _ArgList
        )
    


    ;
    

    

        
         int __cdecl vprintf_s(
                char const* const _Format,
                                          va_list           _ArgList
            )
    


        ;
    

    

    
     int __cdecl _vprintf_p_l(
            char const* const _Format,
                                         _locale_t   const _Locale,
                                                va_list           _ArgList
        )
    


    ;
    

    
     int __cdecl _vprintf_p(
            char const* const _Format,
                                      va_list           _ArgList
        )
    


    ;
    

    
     int __cdecl _fprintf_l(
                                          FILE*       const _Stream,
            char const* const _Format,
                                         _locale_t   const _Locale,
        ...)
    


    ;
    

    
     int __cdecl fprintf(
                                FILE*       const _Stream,
            char const* const _Format,
        ...)
    


    ;
    

    int __cdecl _set_printf_count_output(
          int _Value
        );

    int __cdecl _get_printf_count_output(void);

    
     int __cdecl _fprintf_s_l(
                                          FILE*       const _Stream,
            char const* const _Format,
                                         _locale_t   const _Locale,
        ...)
    


    ;
    

    

        
         int __cdecl fprintf_s(
                                    FILE*       const _Stream,
                char const* const _Format,
            ...)
    


        ;
    

    

    
     int __cdecl _fprintf_p_l(
                                          FILE*       const _Stream,
            char const* const _Format,
                                         _locale_t   const _Locale,
        ...)
    


    ;
    

    
     int __cdecl _fprintf_p(
                                FILE*       const _Stream,
            char const* const _Format,
        ...)
    


    ;
    

    
     int __cdecl _printf_l(
            char const* const _Format,
                                         _locale_t   const _Locale,
        ...)
    


    ;
    

    
     int __cdecl printf(
            char const* const _Format,
        ...)
    


    ;
    

    
     int __cdecl _printf_s_l(
            char const* const _Format,
                                         _locale_t   const _Locale,
        ...)
    


    ;
    

    

        
         int __cdecl printf_s(
                char const* const _Format,
            ...)
    


        ;
    

    

    
     int __cdecl _printf_p_l(
            char const* const _Format,
                                         _locale_t   const _Locale,
        ...)
    


    ;
    

    
     int __cdecl _printf_p(
            char const* const _Format,
        ...)
    


    ;
    


    
    
    
    
    
    int __cdecl __stdio_common_vfscanf(
                                            unsigned __int64 _Options,
                                         FILE*            _Stream,
            char const*      _Format,
                                        _locale_t        _Locale,
                                               va_list          _Arglist
        );

    
     int __cdecl _vfscanf_l(
                                FILE*       const _Stream,
            char const* const _Format,
                               _locale_t   const _Locale,
                                      va_list           _ArgList
        )
    


    ;
    

    
     int __cdecl vfscanf(
                                FILE*       const _Stream,
            char const* const _Format,
                                      va_list           _ArgList
        )
    


    ;
    

    
     int __cdecl _vfscanf_s_l(
                                FILE*       const _Stream,
            char const* const _Format,
                               _locale_t   const _Locale,
                                      va_list           _ArgList
        )
    


    ;
    


    

        
         int __cdecl vfscanf_s(
                                    FILE*       const _Stream,
                char const* const _Format,
                                          va_list           _ArgList
            )
    


        ;
    

    

    
     int __cdecl _vscanf_l(
            char const* const _Format,
                               _locale_t   const _Locale,
                                      va_list           _ArgList
        )
    


    ;
    

    
     int __cdecl vscanf(
            char const* const _Format,
                                      va_list           _ArgList
        )
    


    ;
    

    
     int __cdecl _vscanf_s_l(
            char const* const _Format,
                               _locale_t   const _Locale,
                                      va_list           _ArgList
        )
    


    ;
    

    

        
         int __cdecl vscanf_s(
                char const* const _Format,
                                          va_list           _ArgList
            )
    


        ;
    

    

     int __cdecl _fscanf_l(
                                         FILE*       const _Stream,
            char const* const _Format,
                                        _locale_t   const _Locale,
        ...)
    


    ;
    

      int __cdecl fscanf(
                               FILE*       const _Stream,
            char const* const _Format,
        ...)
    


    ;
    

    
     int __cdecl _fscanf_s_l(
                                           FILE*       const _Stream,
            char const* const _Format,
                                          _locale_t   const _Locale,
        ...)
    


    ;
    

    

        
         int __cdecl fscanf_s(
                                     FILE*       const _Stream,
                char const* const _Format,
            ...)
    


        ;
    

    

     int __cdecl _scanf_l(
            char const* const _Format,
                                        _locale_t   const _Locale,
        ...)
    


    ;
    

      int __cdecl scanf(
            char const* const _Format,
        ...)
    


    ;
    

    
     int __cdecl _scanf_s_l(
            char const* const _Format,
                                          _locale_t   const _Locale,
        ...)
    


    ;
    

    

        
         int __cdecl scanf_s(
                char const* const _Format,
            ...)
    


        ;
    

    



    
    
    
    
    
     
    int __cdecl __stdio_common_vsprintf(
                                             unsigned __int64 _Options,
                 char*            _Buffer,
                                             size_t           _BufferCount,
            char const*      _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

     
    int __cdecl __stdio_common_vsprintf_s(
                                             unsigned __int64 _Options,
                     char*            _Buffer,
                                             size_t           _BufferCount,
            char const*      _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

     
    int __cdecl __stdio_common_vsnprintf_s(
                                             unsigned __int64 _Options,
                 char*            _Buffer,
                                             size_t           _BufferCount,
                                             size_t           _MaxCount,
            char const*      _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

     
    int __cdecl __stdio_common_vsprintf_p(
                                             unsigned __int64 _Options,
                     char*            _Buffer,
                                             size_t           _BufferCount,
            char const*      _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

     
     int __cdecl _vsnprintf_l(
            char*       const _Buffer,
                                                  size_t      const _BufferCount,
                 char const* const _Format,
                                              _locale_t   const _Locale,
                                                     va_list           _ArgList
        )
    


    ;
    

     
    
     int __cdecl _vsnprintf(
            char*       const _Buffer,
                                                 size_t      const _BufferCount,
                          char const* const _Format,
                                                    va_list           _ArgList
        )
    


    ;
    

    










     
    
     int __cdecl vsnprintf(
           char*       const _Buffer,
                                                       size_t      const _BufferCount,
                                char const* const _Format,
                                                          va_list           _ArgList
        )
    


    ;
    

     
     int __cdecl _vsprintf_l(
           char*       const _Buffer,
                                    char const* const _Format,
                                  _locale_t   const _Locale,
                                         va_list           _ArgList
        )
    


    ;
    

     
     int __cdecl vsprintf(
           char*       const _Buffer,
               char const* const _Format,
                                         va_list           _ArgList
        )
    


    ;
    

     
    
     int __cdecl _vsprintf_s_l(
           char*       const _Buffer,
                                                   size_t      const _BufferCount,
                  char const* const _Format,
                                               _locale_t   const _Locale,
                                                      va_list           _ArgList
        )
    


    ;
    

    

         
        
         int __cdecl vsprintf_s(
               char*       const _Buffer,
                                                       size_t      const _BufferCount,
                                char const* const _Format,
                                                          va_list           _ArgList
            )
    


        ;
    

        

    

     
    
     int __cdecl _vsprintf_p_l(
           char*       const _Buffer,
                                                   size_t      const _BufferCount,
                  char const* const _Format,
                                               _locale_t   const _Locale,
                                                      va_list           _ArgList
        )
    


    ;
    

     
    
     int __cdecl _vsprintf_p(
           char*       const _Buffer,
                                                   size_t      const _BufferCount,
                            char const* const _Format,
                                                      va_list           _ArgList
        )
    


    ;
    

     
    
     int __cdecl _vsnprintf_s_l(
           char*       const _Buffer,
                                                       size_t      const _BufferCount,
                                                       size_t      const _MaxCount,
                      char const* const _Format,
                                                   _locale_t   const _Locale,
                                                          va_list          _ArgList
        )
    


    ;
    

     
    
     int __cdecl _vsnprintf_s(
           char*       const _Buffer,
                                                       size_t      const _BufferCount,
                                                       size_t      const _MaxCount,
                                char const* const _Format,
                                                          va_list           _ArgList
        )
    


    ;
    

    

    

         
        
         int __cdecl vsnprintf_s(
               char*       const _Buffer,
                                                           size_t      const _BufferCount,
                                                           size_t      const _MaxCount,
                                    char const* const _Format,
                                                              va_list           _ArgList
            )
    


        ;
    

        

    

    
     int __cdecl _vscprintf_l(
            char const* const _Format,
                                         _locale_t   const _Locale,
                                                va_list           _ArgList
        )
    


    ;
    

     
     int __cdecl _vscprintf(
            char const* const _Format,
                                      va_list           _ArgList
        )
    


    ;
    

    
     int __cdecl _vscprintf_p_l(
            char const* const _Format,
                                         _locale_t   const _Locale,
                                                va_list           _ArgList
        )
    


    ;
    

     
     int __cdecl _vscprintf_p(
            char const* const _Format,
                                      va_list           _ArgList
        )
    


    ;
    

    
     int __cdecl _vsnprintf_c_l(
                   char*       const _Buffer,
                                             size_t      const _BufferCount,
            char const* const _Format,
                                         _locale_t   const _Locale,
                                                va_list           _ArgList
        )
    


    ;
    

     
    
     int __cdecl _vsnprintf_c(
          char*       const _Buffer,
                                    size_t      const _BufferCount,
             char const* const _Format,
                                       va_list           _ArgList
        )
    


    ;
    

     
     int __cdecl _sprintf_l(
                  char*       const _Buffer,
            char const* const _Format,
                                         _locale_t   const _Locale,
        ...)
    


    ;
    

     
    
     int __cdecl sprintf(
           char*       const _Buffer,
               char const* const _Format,
        ...)
    


    ;
    

    int __cdecl sprintf(  char *_Buffer,  char const* _Format, ...); int __cdecl vsprintf(  char *_Buffer,  char const* _Format, va_list _Args);

     
    
     int __cdecl _sprintf_s_l(
           char*       const _Buffer,
                                                   size_t      const _BufferCount,
                  char const* const _Format,
                                               _locale_t   const _Locale,
        ...)
    


    ;
    

    

         
        
         int __cdecl sprintf_s(
               char*       const _Buffer,
                                                       size_t      const _BufferCount,
                                char const* const _Format,
            ...)
    


        ;
    

    

    

     
    
     int __cdecl _sprintf_p_l(
           char*       const _Buffer,
                                                   size_t      const _BufferCount,
                  char const* const _Format,
                                               _locale_t   const _Locale,
        ...)
    


    ;
    

     
    
     int __cdecl _sprintf_p(
           char*       const _Buffer,
                                                   size_t      const _BufferCount,
                            char const* const _Format,
        ...)
    


    ;
    

     
     int __cdecl _snprintf_l(
            char*       const _Buffer,
                                                  size_t      const _BufferCount,
                 char const* const _Format,
                                              _locale_t   const _Locale,
        ...)
    


    ;
    

    










     
    
     int __cdecl snprintf(
           char*       const _Buffer,
                                                       size_t      const _BufferCount,
                                char const* const _Format,
        ...)
    


    ;
    

     
    
     int __cdecl _snprintf(
            char*       const _Buffer,
                                                  size_t      const _BufferCount,
                           char const* const _Format,
        ...)
    


    ;
    

    int __cdecl _snprintf(    char *_Buffer,   size_t _BufferCount,     char const* _Format, ...); int __cdecl _vsnprintf(    char *_Buffer,   size_t _BufferCount,     char const* _Format, va_list _Args);

     
    
     int __cdecl _snprintf_c_l(
                   char*       const _Buffer,
                                             size_t      const _BufferCount,
            char const* const _Format,
                                         _locale_t   const _Locale,
        ...)
    


    ;
    

     
    
     int __cdecl _snprintf_c(
          char*       const _Buffer,
                                    size_t      const _BufferCount,
             char const* const _Format,
        ...)
    


    ;
    

     
    
     int __cdecl _snprintf_s_l(
           char*       const _Buffer,
                                                       size_t      const _BufferCount,
                                                       size_t      const _MaxCount,
                      char const* const _Format,
                                                   _locale_t   const _Locale,
        ...)
    


    ;
    

     
    
     int __cdecl _snprintf_s(
           char*       const _Buffer,
                                                       size_t      const _BufferCount,
                                                       size_t      const _MaxCount,
                                char const* const _Format,
        ...)
    


    ;
    

    

    
     int __cdecl _scprintf_l(
            char const* const _Format,
                                         _locale_t   const _Locale,
        ...)
    


    ;
    

     
     int __cdecl _scprintf(
            char const* const _Format,
        ...)
    


    ;
    

    
     int __cdecl _scprintf_p_l(
            char const* const _Format,
                                         _locale_t   const _Locale,
        ...)
    


    ;
    

     
     int __cdecl _scprintf_p(
            char const* const _Format,
        ...)
    


    ;
    

    
    
    
    
    
    int __cdecl __stdio_common_vsscanf(
                                            unsigned __int64 _Options,
                  char const*      _Buffer,
                                            size_t           _BufferCount,
            char const*      _Format,
                                        _locale_t        _Locale,
                                               va_list          _ArgList
        );

    
     int __cdecl _vsscanf_l(
                                 char const* const _Buffer,
            char const* const _Format,
                               _locale_t   const _Locale,
                                      va_list           _ArgList
        )
    


    ;
    

    
     int __cdecl vsscanf(
                                 char const* const _Buffer,
            char const* const _Format,
                                      va_list           _ArgList
        )
    


    ;
    

    
     int __cdecl _vsscanf_s_l(
                                 char const* const _Buffer,
            char const* const _Format,
                               _locale_t   const _Locale,
                                      va_list           _ArgList
        )
    


    ;
    

    

                
        
         int __cdecl vsscanf_s(
                                     char const* const _Buffer,
                char const* const _Format,
                                          va_list           _ArgList
            )
    


        ;
    

        

        
    

     int __cdecl _sscanf_l(
                                          char const* const _Buffer,
            char const* const _Format,
                                        _locale_t   const _Locale,
        ...)
    


    ;
    

      int __cdecl sscanf(
                                char const* const _Buffer,
            char const* const _Format,
        ...)
    


    ;
    

    
     int __cdecl _sscanf_s_l(
                                            char const* const _Buffer,
            char const* const _Format,
                                          _locale_t   const _Locale,
        ...)
    


    ;
    

    

        
         int __cdecl sscanf_s(
                                      char const* const _Buffer,
                char const* const _Format,
            ...)
    


        ;
    

    

        
     int __cdecl _snscanf_l(
            char const* const _Buffer,
                                            size_t      const _BufferCount,
            char const* const _Format,
                                        _locale_t   const _Locale,
        ...)
    


    ;
    

     int __cdecl _snscanf(
            char const* const _Buffer,
                                            size_t      const _BufferCount,
                      char const* const _Format,
        ...)
    


    ;
    


    
     int __cdecl _snscanf_s_l(
              char const* const _Buffer,
                                              size_t      const _BufferCount,
            char const* const _Format,
                                          _locale_t   const _Locale,
        ...)
    


    ;
    

    
     int __cdecl _snscanf_s(
            char const* const _Buffer,
                                            size_t      const _BufferCount,
                    char const* const _Format,
        ...)
    


    ;
    

    
    





    
    
    
    
    
    

        

        




        char* __cdecl tempnam(
              char const* _Directory,
              char const* _FilePrefix
            );

        



         int   __cdecl fcloseall(void);
              FILE* __cdecl fdopen(  int _FileHandle,   char const* _Format);
         int   __cdecl fgetchar(void);
              int   __cdecl fileno(  FILE* _Stream);
         int   __cdecl flushall(void);
         int   __cdecl fputchar(  int _Ch);
              int   __cdecl getw(  FILE* _Stream);
         int   __cdecl putw(  int _Ch,   FILE* _Stream);
              int   __cdecl rmtmp(void);

    




__pragma(pack(pop))











typedef FILE *PFILE, **PPFILE;
typedef DWORD CLFSSTATUS;



































































    












typedef ULONG                       CLFS_CONTAINER_ID;
typedef CLFS_CONTAINER_ID           *PCLFS_CONTAINER_ID;
typedef CLFS_CONTAINER_ID           **PPCLFS_CONTAINER_ID;















typedef struct _CLS_LSN
{

    ULONGLONG               Internal;

} CLS_LSN, *PCLS_LSN, **PPCLS_LSN;











typedef CLS_LSN CLFS_LSN;
typedef CLFS_LSN *PCLFS_LSN, **PPCLFS_LSN;













































extern const CLFS_LSN CLFS_LSN_INVALID;
extern const CLFS_LSN CLFS_LSN_NULL;






















































































typedef UCHAR CLS_RECORD_TYPE, *PCLS_RECORD_TYPE, **PPCLS_RECORD_TYPE;
typedef CLS_RECORD_TYPE CLFS_RECORD_TYPE, *PCLFS_RECORD_TYPE, **PPCLFS_RECORD_TYPE;










typedef enum _CLS_CONTEXT_MODE
{
    ClsContextNone = 0x00,
    ClsContextUndoNext,
    ClsContextPrevious,
    ClsContextForward

} CLS_CONTEXT_MODE, *PCLS_CONTEXT_MODE, **PPCLS_CONTEXT_MODE;







typedef enum _CLFS_CONTEXT_MODE
{
    ClfsContextNone = 0x00,
    ClfsContextUndoNext,
    ClfsContextPrevious,
    ClfsContextForward

} CLFS_CONTEXT_MODE, *PCLFS_CONTEXT_MODE, **PPCLFS_CONTEXT_MODE;












typedef struct _CLFS_NODE_ID
{
    ULONG   cType;                                      
    ULONG   cbNode;                                     

} CLFS_NODE_ID, *PCLFS_NODE_ID;











typedef struct _CLS_WRITE_ENTRY
{
    PVOID Buffer;
    ULONG ByteLength;
} CLS_WRITE_ENTRY, *PCLS_WRITE_ENTRY, **PPCLS_WRITE_ENTRY;







typedef CLS_WRITE_ENTRY CLFS_WRITE_ENTRY;
typedef CLFS_WRITE_ENTRY *PCLFS_WRITE_ENTRY, **PPCLFS_WRITE_ENTRY;









typedef GUID CLFS_LOG_ID;










typedef struct _CLS_INFORMATION
{
    LONGLONG TotalAvailable;                            
    LONGLONG CurrentAvailable;                          
    LONGLONG TotalReservation;                       
    ULONGLONG BaseFileSize;                             
    ULONGLONG ContainerSize;                            
    ULONG TotalContainers;                              
    ULONG FreeContainers;                               
    ULONG TotalClients;                                 
    ULONG Attributes;                                   
    ULONG FlushThreshold;                               
    ULONG SectorSize;                                   
    CLS_LSN MinArchiveTailLsn;                          
    CLS_LSN BaseLsn;                                    
    CLS_LSN LastFlushedLsn;                             
    CLS_LSN LastLsn;                                    
    CLS_LSN RestartLsn;                                 
    GUID Identity;                                      
} CLS_INFORMATION, *PCLS_INFORMATION, *PPCLS_INFORMATION;







typedef CLS_INFORMATION CLFS_INFORMATION;
typedef CLFS_INFORMATION *PCLFS_INFORMATION, *PPCLFS_INFORMATION;




































typedef struct _CLFS_LOG_NAME_INFORMATION
{

    USHORT NameLengthInBytes;
    WCHAR  Name[1];

} CLFS_LOG_NAME_INFORMATION, *PCLFS_LOG_NAME_INFORMATION, **PPCLFS_LOG_NAME_INFORMATION;










typedef struct _CLFS_STREAM_ID_INFORMATION
{

    UCHAR StreamIdentifier;

} CLFS_STREAM_ID_INFORMATION, *PCLFS_STREAM_ID_INFORMATION, **PPCLFS_STREAM_ID_INFORMATION;









typedef struct _CLFS_PHYSICAL_LSN_INFORMATION
{
    UCHAR          StreamIdentifier;
    CLFS_LSN       VirtualLsn;
    CLFS_LSN       PhysicalLsn;

} CLFS_PHYSICAL_LSN_INFORMATION, *PCLFS_PHYSICAL_LSN_INFORMATION;











typedef UINT32 CLS_CONTAINER_STATE, *PCLS_CONTAINER_STATE, *PPCLS_CONTAINER_STATE;
typedef CLS_CONTAINER_STATE  CLFS_CONTAINER_STATE, *PCLFS_CONTAINER_STATE, *PPCLFS_CONTAINER_STATE;






































































typedef struct _CLS_CONTAINER_INFORMATION
{
    ULONG FileAttributes;                    
    ULONGLONG CreationTime;                  
    ULONGLONG LastAccessTime;                
    ULONGLONG LastWriteTime;                 
    LONGLONG ContainerSize;                  
    ULONG FileNameActualLength;              
    ULONG FileNameLength;                    
    WCHAR FileName [(256)];
    CLFS_CONTAINER_STATE State;              
    CLFS_CONTAINER_ID PhysicalContainerId;   
    CLFS_CONTAINER_ID LogicalContainerId;    

} CLS_CONTAINER_INFORMATION, *PCLS_CONTAINER_INFORMATION, **PPCLS_CONTAINER_INFORMATION;





typedef CLS_CONTAINER_INFORMATION CLFS_CONTAINER_INFORMATION;
typedef CLFS_CONTAINER_INFORMATION *PCLFS_CONTAINER_INFORMATION, **PPCLFS_CONTAINER_INFORMATION;











typedef enum _CLS_LOG_INFORMATION_CLASS
{

    ClfsLogBasicInformation = 0x00,         
    ClfsLogBasicInformationPhysical,        
    ClfsLogPhysicalNameInformation,         
    ClfsLogStreamIdentifierInformation,     

    ClfsLogSystemMarkingInformation,        
    ClfsLogPhysicalLsnInformation           


} CLS_LOG_INFORMATION_CLASS, *PCLS_LOG_INFORMATION_CLASS, **PPCLS_LOG_INFORMATION_CLASS;





typedef CLS_LOG_INFORMATION_CLASS CLFS_LOG_INFORMATION_CLASS;
typedef CLFS_LOG_INFORMATION_CLASS *PCLFS_LOG_INFORMATION_CLASS, **PPCLFS_LOG_INFORMATION_CLASS;









typedef enum _CLS_IOSTATS_CLASS
{
    ClsIoStatsDefault = 0x0000,
    ClsIoStatsMax     = 0xFFFF

} CLS_IOSTATS_CLASS, *PCLS_IOSTATS_CLASS, **PPCLS_IOSTATS_CLASS;










typedef enum _CLFS_IOSTATS_CLASS
{
    ClfsIoStatsDefault = 0x0000,
    ClfsIoStatsMax     = 0xFFFF

} CLFS_IOSTATS_CLASS, *PCLFS_IOSTATS_CLASS, **PPCLFS_IOSTATS_CLASS;












typedef struct _CLS_IO_STATISTICS_HEADER
{
    UCHAR                ubMajorVersion;     
    UCHAR                ubMinorVersion;     
    CLFS_IOSTATS_CLASS  eStatsClass;        
    USHORT              cbLength;           
    ULONG               coffData;           

} CLS_IO_STATISTICS_HEADER, *PCLS_IO_STATISTICS_HEADER, **PPCLS_IO_STATISTICS_HEADER;





typedef CLS_IO_STATISTICS_HEADER CLFS_IO_STATISTICS_HEADER;
typedef CLFS_IO_STATISTICS_HEADER *PCLFS_IO_STATISTICS_HEADER, **PPCLFS_IO_STATISTICS_HEADER;




typedef struct _CLS_IO_STATISTICS
{
    CLS_IO_STATISTICS_HEADER hdrIoStats;    
    ULONGLONG cFlush;                       
    ULONGLONG cbFlush;                      
    ULONGLONG cMetaFlush;                   
    ULONGLONG cbMetaFlush;                  

} CLS_IO_STATISTICS, *PCLS_IO_STATISTICS, **PPCLS_IO_STATISTICS;





typedef CLS_IO_STATISTICS CLFS_IO_STATISTICS;
typedef CLFS_IO_STATISTICS *PCLFS_IO_STATISTICS, **PPCLFS_IO_STATISTICS;





























typedef UCHAR CLFS_SCAN_MODE, *PCLFS_SCAN_MODE;

























































typedef struct _CLS_SCAN_CONTEXT
{
    CLFS_NODE_ID cidNode;
    HANDLE hLog;
    ULONG cIndex;
    ULONG cContainers;
    ULONG cContainersReturned;
    CLFS_SCAN_MODE eScanMode;
    PCLS_CONTAINER_INFORMATION pinfoContainer;
    
} CLS_SCAN_CONTEXT, *PCLS_SCAN_CONTEXT, **PPCLS_SCAN_CONTEXT;











typedef CLS_SCAN_CONTEXT CLFS_SCAN_CONTEXT;
typedef CLFS_SCAN_CONTEXT *PCLFS_SCAN_CONTEXT, **PPCLFS_SCAN_CONTEXT;













typedef struct _CLS_ARCHIVE_DESCRIPTOR
{
    ULONGLONG coffLow;
    ULONGLONG coffHigh;
    CLS_CONTAINER_INFORMATION infoContainer;

} CLS_ARCHIVE_DESCRIPTOR, *PCLS_ARCHIVE_DESCRIPTOR, **PPCLS_ARCHIVE_DESCRIPTOR;





typedef CLS_ARCHIVE_DESCRIPTOR CLFS_ARCHIVE_DESCRIPTOR;
typedef CLFS_ARCHIVE_DESCRIPTOR *PCLFS_ARCHIVE_DESCRIPTOR, **PPCLFS_ARCHIVE_DESCRIPTOR;









typedef PVOID (* CLFS_BLOCK_ALLOCATION) (ULONG cbBufferLength, PVOID pvUserContext);







typedef void (* CLFS_BLOCK_DEALLOCATION) (PVOID pvBuffer, PVOID pvUserContext);









typedef enum _CLFS_LOG_ARCHIVE_MODE
{

    ClfsLogArchiveEnabled = 0x01,
    ClfsLogArchiveDisabled = 0x02

} CLFS_LOG_ARCHIVE_MODE, *PCLFS_LOG_ARCHIVE_MODE;

































BOOLEAN NTAPI LsnEqual(
      const CLFS_LSN* plsn1,
      const CLFS_LSN* plsn2
);























BOOLEAN NTAPI LsnLess(
      const CLFS_LSN* plsn1,
      const CLFS_LSN* plsn2
);























BOOLEAN NTAPI LsnGreater(
      const CLFS_LSN* plsn1,
      const CLFS_LSN* plsn2
);























BOOLEAN NTAPI LsnNull(
      const CLFS_LSN* plsn
);





















CLFS_CONTAINER_ID NTAPI LsnContainer(
    const CLFS_LSN* plsn
);


























CLFS_LSN NTAPI LsnCreate(
      CLFS_CONTAINER_ID    cidContainer,
      ULONG                offBlock,
      ULONG                cRecord
);





















ULONG NTAPI LsnBlockOffset(
    const CLFS_LSN* plsn
);





















ULONG NTAPI LsnRecordSequence(
      const CLFS_LSN* plsn
);























BOOLEAN NTAPI LsnInvalid(
      const CLFS_LSN* plsn
);























CLFS_LSN NTAPI
LsnIncrement (  PCLFS_LSN  plsn);




























































































































