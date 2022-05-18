#include "s21_string.h"


char *s21_strrchr(const char *str, int c) {
    char *charFind = 0;
    do {
        if (*str == c)
            charFind = (char*)str;
    } while (*str++);
    return charFind;
}