// int로 점수를 입력을 받아서 90점 이상 A, 80점 이상 B, 70점 이상 C, 60점 이상 D, 60점 미만 F
#include <stdio.h>

int main(void)
{
    int num;
    char grade = 'F';
    printf("점수를 넣으세요 : \n");
    scanf("%d", &num);

    if (num >= 90)
    {
        grade = 'A';
    }
    else if (num >= 80)
    {
        grade = 'B';
    }
    else if (num >= 70)
    {
        grade = 'C';
    }
    else if (num >= 60)
    {
        grade = 'D';
    }
    printf("%d 는 %c 등급입니다.\n",num, grade);
    return 0;
}