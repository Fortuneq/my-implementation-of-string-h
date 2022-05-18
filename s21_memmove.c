#include "s21_string.h"

void *s21_memmove(void* dest, const void* src, s21_size_t n) {
    unsigned char *s1;
    unsigned char *s2;

    s1 = (unsigned char*)dest;
    s2 = (unsigned char*)src;
    if(!dest && !src) {
        return(NULL);
    
    }
    if(s2 < s1) {
        while(n--)
        s1[n] = s2[n];
    }
    else
        s21_memcpy(s1, s2, n);
    return(dest);
}
