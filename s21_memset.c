#include "s21_string.h"

void *s21_memset(void *s, int c,  s21_size_t len)
{
    unsigned char* p=s;
    while(len--)
    {
        *p++ = (unsigned char)c;
    }
   
  
    return s;
}