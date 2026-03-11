#include <stdio.h>

int main(void)
{
    int man, womam;
    double sum, manRate, womanRate;

    printf("남자의 수는 : ");
    scanf("%d", &man);
    printf("여자의 수는 : ");
    scanf("%d", &womam);

    sum = man + womam;
    womanRate = womam / sum * 100;
    manRate = man / sum * 100;

    printf("남자의 수는 %d명이고 여자의 수는 %d명이다.\n", man, womam);
    printf("총 수는 %.f명\n남자의 비율은 %.2f\n여자의 비율은 %.2f\n", sum, manRate, womanRate);
    return 0;
}