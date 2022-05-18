#include "s21_string.h"


char *s21_strncpy (char *dest, char *src,int n) {
    if (dest == NULL) {
        return NULL;
    }
    char *ptr = dest;
    while (*src != '\0' && n--) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return ptr;
}