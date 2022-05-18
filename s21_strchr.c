#include "s21_string.h"

char *s21_strchr(const char *str, int c) {
   int i;
   i = 0;
   while(str[i] != '\0') {
       if(str[i] == c) {
           return ((char*)str);
       }
       str++;
   }
   if(c == '\0') {
       return ((char*)str);
   }
   return NULL;
}
