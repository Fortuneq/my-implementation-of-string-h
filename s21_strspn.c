#include "s21_string.h"


s21_size_t s21_strspn(char *str1, char *str2) {
    s21_size_t len = 0;
    if ( (str1 == NULL)||(str2 == NULL) ) {
        return len;
    }
    while(*str1 && s21_strchr(str2,*str1++)) {
        len++;
    }
    return len;
}
