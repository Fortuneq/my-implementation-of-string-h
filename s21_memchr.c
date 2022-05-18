#include "s21_string.h"

void *s21_memchr(const void *s, unsigned int c, s21_size_t n) {
    unsigned char *p = (unsigned char *)s; // создаём поинтер строки по которому будем двигаться
    unsigned char *isCharFind = NULL;      // указатель на будущее расположение символа в строке
    while ((s != NULL) && (n--))           // строка не кончилась из беззнаковго n можно вычесть
    {
        if (*p != (unsigned char)c) //если значение указателя не равно символу
        {
            p++; // сдвигаемся вперёд на один символ
        }
        else
        {
            isCharFind = p; // указатель на расположение символа равен текущему
            break;
        }
    }
    return isCharFind; // возвращаем указатель на расположение
}