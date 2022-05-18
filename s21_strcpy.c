#include "s21_string.h"


char *s21_strcpy (char *dest, char *src) {
    if (dest == NULL) {
        return NULL;
    }
    char *ptr = dest;
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return ptr;
}