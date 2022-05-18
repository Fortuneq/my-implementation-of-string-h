#include "s21_string.h"


s21_size_t s21_strcspn(const char *str1, const char *str2) {
    unsigned int len = 0;
    if ((str1 == NULL) || (str2 == NULL)) {
        return len;
    }
    while (*str1) {
        if (s21_strchr(str2, *str1)) {
            return len;
        } else {
            str1++;
            len++;
        }
    }
    return len;
}

