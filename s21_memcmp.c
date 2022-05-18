#include "s21_string.h"

int s21_memcmp(const void *s1, const void *s2, s21_size_t len) {
    unsigned const char *p = s1;
    unsigned const char *q = s2;
    int charCompareStatus = 0;
    // If both pointer pointing same memory block
    if (s1 == s2) {
        // printf("%d\n", charCompareStatus);
        return charCompareStatus;
    }
    while (len > 0)
    {
        if (*p != *q)
        { // compare the mismatching character
            if (*p > *q)
            {
                charCompareStatus = 1;
            }
            else
            {
                charCompareStatus = -1;
            }
            break;
        }
        len--;
        p++;
        q++;
    }
    // printf("%d\n", charCompareStatus);
    return charCompareStatus;
}