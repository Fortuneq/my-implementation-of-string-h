#include "s21_string.h"


char *s21_strpbrk(char *str1,  char *str2) {
    while (*str1) {
        if (s21_strchr(str2,*str1)) {
            return str1;
        }
        else {
            str1++;
        }
    }
    return NULL;
}