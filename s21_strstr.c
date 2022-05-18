#include "s21_string.h"


char* s21_strstr(const char *haystack, const char *needle) {
    s21_size_t  needle_len;

    needle_len = s21_strlen(needle);
    while (*haystack) {
        if (*haystack == *needle) {
            if (!s21_strncmp(haystack, needle, needle_len))
                    return ((char *)haystack);
        }
        haystack++;
    }
    return (NULL);
}