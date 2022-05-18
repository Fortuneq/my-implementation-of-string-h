#ifndef SRC_S21_STRING_H
#define SRC_S21_STRING_H


#undef NULL
#define NULL ((void *)0)

typedef long unsigned s21_size_t;

s21_size_t s21_strlen(const char *str);
char *s21_strncat(char *dest, const char *src, int length);
char *s21_strchr(const char *str, int c);
char *s21_strcpy (char *dest, char *src);
char *s21_strncpy (char *dest, char *src,int n);
char *s21_strpbrk( char *str1,  char *str2);
char *s21_strrchr(const char *str, int c);
char *s21_strstr(const char *haystack, const char *needle);
int s21_strcmp(char *str1, char *str2);
int s21_strncmp(const char *str1,const char *str2, s21_size_t n);
s21_size_t s21_strspn(char *str1, char *str2);
s21_size_t s21_strcspn(const char *str1, const char *str2);
char *s21_strstr(const char *haystack, const char *needle);
char *s21_strtok(char *str, const char* delim);
void *s21_memchr(const void *s, unsigned int c, s21_size_t n);
int s21_memcmp(const void *s1, const void *s2, s21_size_t len);
void * s21_memcpy(void* dst, const void* src, s21_size_t cnt);
void *s21_memset(void *s, int c,  s21_size_t len);
char *s21_strcat(char *s1, const char *s2);
void *s21_memmove(void* dest, const void* src, s21_size_t n);
char *s21_strerror(int errnum);

#endif 