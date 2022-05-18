#include "s21_string.h"

void * s21_memcpy(void* dst, const void* src, s21_size_t cnt){
    
    char *pszDest = (char *)dst;
    const char *pszSource =( const char*)src;
   
    if((pszDest!= NULL) && (pszSource!= NULL))
    {

        while(--cnt) 
        {

            *(pszDest++)= *(pszSource++);
        }
    }
    return dst;
}