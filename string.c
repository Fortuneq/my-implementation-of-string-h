#include <stdio.h>
#include <string.h>
typedef long unsigned s21_size_t;

s21_size_t s21_strlen(const char *str)
{
    s21_size_t len = 0;
    for (; str[len]; len++)
    {
    }
    return len;
}

void *s21_memchr(const void *s, unsigned int c, s21_size_t n)
{
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

int s21_memcmp(const void *s1, const void *s2, s21_size_t len)
{
    unsigned const char *p = s1;
    unsigned const char *q = s2;
    int charCompareStatus = 0;
    // If both pointer pointing same memory block
    if (s1 == s2)
    {
        printf("%d\n", charCompareStatus);
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
    printf("%d\n", charCompareStatus);
    return charCompareStatus;
}

void * s21_memcpy(void* dst, const void* src, s21_size_t cnt)
{
    
    char *pszDest = (char *)dst;
    const char *pszSource =( const char*)src;
   
    if((pszDest!= NULL) && (pszSource!= NULL))
    {
         printf("GGGO");
        while(--cnt) //till cnt
        {
            //Copy byte by byte
            *(pszDest++)= *(pszSource++);
        }
    }
    return dst;
}

void *s21_memset(void *s, int c,  s21_size_t len)
{
    unsigned char* p=s;
    printf("%s",p);
    while(len--)
    {
        printf("%s",p);
        *p++ = (unsigned char)c;
    }
   
      unsigned char* g=s;
    printf("%s",g);
    return s;
}

char *s21_strcat(char *s1, const char *s2)
{
    //Pointer should not null pointer
    if((s1 == NULL) && (s2 == NULL))
        return NULL;
    //Create copy of s1
    char *start = s1;
    //Find the end of the destination string
    while(*start != '\0')
    {
        start++;
    }
    //Now append the source string characters
    //until not get null character of s2
    while(*s2 != '\0')
    {
        *start++ = *s2++;
    }
    //Append null character in the last
    *start = '\0';
    printf("%s",s1);
    return s1;
}

int main()
{
    const char *grid = "yulmerm";
    const char *did = "hi";
    const char *hi = "hi";
    char *sttr = "ello";
    printf("\nmemchr\n");
    printf("%p\n",memchr(grid,101,6));
    printf("%p\n",memchr(grid,0,6));
    printf("\ns21_memchr\n");
    printf("%p\n",s21_memchr(grid, 101, 6));
    printf("%p",s21_memchr(grid, 0, 6));

    /*printf("\nmemset\n");
    printf("%p\n",memset(sttr,101,6));
    printf("%p\n",memset(sttr,10,6));
    printf("\ns21_memset\n");
    printf("%p",s21_memset(sttr, 101, 6));
    printf("%p",s21_memset(sttr, 10, 6));
*/
    printf("\nmemcmp\n");
    printf("%d\n",memcmp(did, grid, 2));
    printf("%d\n",memcmp(sttr, did, 2));
    printf("%d\n",memcmp(did, hi, 2));
    printf("\ns21_memcmp\n");
    s21_memcmp(did, grid, 2);
    s21_memcmp(sttr, did, 2);
    s21_memcmp(did, hi, 2);

    
    printf("strlen\n");
   
    printf("%d\n",strlen(grid));
     printf("%d\n",strlen(sttr));
      printf("%d\n",strlen(hi));
    printf("s21_strlen\n");
     printf("%ld\n",s21_strlen(grid));
     printf("%ld\n",s21_strlen(sttr));
      printf("%ld\n",s21_strlen(hi));
    
    printf("memcpy\n");
   
    printf("%p\n",memcpy(sttr,grid,10));
    printf("%p\n",memcpy(sttr,hi,10));
    printf("%p\n",memcpy(sttr,did,10));
    printf("s21_memcpy\n");
     printf("%p\n",s21_memcpy(sttr,grid,10));
    printf("%p\n",s21_memcpy(sttr,hi,10));
    printf("%p\n",s21_memcpy(sttr,did,10));
    return 0;
}
