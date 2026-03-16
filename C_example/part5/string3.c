#include <stdio.h>

char *mystrcpy(char *pDes, const char *pSrc);

int main(void)
{
     //strcpy 함수
    char str2[200] = "strawberry";
    mystrcpy(str2, "apple");
    printf("str2: %s\n", str2);
    mystrcpy(str2, "banana");
    printf("str2: %s\n", str2);
    printf("str2: %s\n", mystrcpy(str2, "pineapple"));
    return 0;
}

char *mystrcpy(char *pDes, const char *pSrc)
{
    char *pA = pDes;

    while (*pSrc != '\0')
    {
        *pDes = *pSrc;
        pDes++;
        pSrc++;
    }
    *pDes = '\0';
    return pA;
}
