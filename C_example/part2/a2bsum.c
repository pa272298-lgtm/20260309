// scanf로 입력받은 변수 a,b에 대해서 for 문을 사용하여 a~b까지의 합을 출력 하세요. 
#include <stdio.h>

int main(void)
{
    int a;
    int b;
    printf("숫자를 넣으세요 : \n");
    scanf("%d %d", &a, &b);
    int sum = 0;
    for (int i = a; i <= b;++i)
    {
        sum = sum + i;
    }
    printf("a 부터 b 까지의 합은 : %d\n", sum);
    return 0;
}