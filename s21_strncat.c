#include "s21_string.h"


char *s21_strncat(char *dest, const char *src, int length) {
    if((dest == NULL) && (src == NULL)) {
        return NULL;
    }
    char *start = dest;
    
    while(*start != '\0' ) {
        start++;
    }
    while( length-- ) {
        *start++ = *src++;
    }
    
    *start = '\0';
    return dest;
}