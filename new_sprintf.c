#define S21_NULL ((void *)0)
#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include <stdlib.h>

typedef long unsigned s21_size_t;

typedef struct Flags
{
    int type ;
    int width ;
    int minus ;
    int zero ;
    int precision;
    int star ;
} structure;

int _atoi(const char* str);
char is_digit(char ch);
int s21_sprintf(char *str, const char *format, ...);
void init_flags (structure *flags);
int parse_input(char *str, const char *format);
void parse_flags (char* str,const char* format,int index,structure *flags);
void flag_dot(char* str,const char* format,int index,structure *flags);


int main() {
    char arr[30];
    s21_sprintf(arr,"asd%%");
    printf("%*f",1);
    return 0;
}

//---------------Extra--------------//

//---------------Extra--------------//

int s21_sprintf(char *str, const char *format, ...) {
    int length = 0;
    
    va_list arg;
    va_start(arg, format);
    
    parse_input(str, format);
    va_end(arg);
    return length;
}

int parse_input(char *str, const char *format) {
    int index = 0;
    struct Flags flags;
    init_flags(&flags);
    while(*format != '\0') {
        if (*format == '%') {
            format++;
            if (*format == ' '){
                *str = *format;
                parse_flags(str,format,index,&flags);
            }
            if(*format == '%'){
                *str = *format;
                parse_flags(str,format,index,&flags);
            }
            if(*format == '*'){
                parse_flags(str,format,index,&flags);
            }
             else {
                parse_flags(str,format,index,&flags);
            }
        } else {
            
            *str = *format;
        }
        
        *format++;
        *str++;
    }
    if(*format == '\0'){
        *str = ' ';
    }
}

void init_flags(structure *flags) {
    flags->type = 0;
    flags->width = 0;
    flags->minus = 0;
    flags->zero = 0;
    flags->precision = -1;
    flags->star = 0;
}
void parse_flags (char* str,const char* format,int index,structure *flags) {
    while(*format != '\0'){
        if (*format == '0') {
            flags->zero = 1;
            printf("7");
        } 
        if(*format == '-'){
            flags->minus = 1;
            printf("6");
        }
        if (*format == '.') {
            flag_dot(str,format,index,flags);
        }
        if(*format == '*'){
            flags->star = 1;
        flags->width = va_arg(arg,int);
        if (flags->width < 0){
            flags->minus = 1;
            flags->width *= -1;
        }
        }
        *format++;
    }
}

void flag_dot(char* str,const char* format,int index,structure *flags) {
    int j = 0;
    char dot[30];
    *format++;
    while(is_digit(*format)){
        if(is_digit(*format)) {
            dot[j] = *format;
            *format++;
            j++;
        } else {
            *format++;
        }
    }
    dot[j] = '\0';
    int precision = s21_Atoi(dot);
    flags->precision = precision;
    printf("%d",flags->precision);
}





