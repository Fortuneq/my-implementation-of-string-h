#include "s21_string.h"


int s21_strcmp(char *str1, char *str2) {
    int compareStatus = 0;
    while ( (*str1 != '\0' && *str2 != '\0') && *str1 == *str2) {
        str1++;
        str2++;
    }
    if(*str1 == *str2) {
        compareStatus = 0;
    } else if (*str1 > *str2) {
        compareStatus = 1;
    } else {
        compareStatus = -1;
    }
    return compareStatus;
}