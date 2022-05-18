#include "s21_string.h"


int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
        int compareStatus = 0;
        for (s21_size_t i = 0; i < n; i++) {
            if (*str1 == *str2) {
                compareStatus = 0;
                str1++;
                str2++;
            } else if (*str1 > *str2) {
                compareStatus = 1;
                break;
            } else {
                compareStatus = -1;
                break;
            }
        }
            return compareStatus;
}
