#include <stdio.h>

int main()
{
    int fahr;
    printf("F 온도 를 넣으세요: \n");
    scanf("%d", &fahr);
    double celsius;
    celsius = 5.0 / 9.0 * (double)fahr - 32.0;

    printf("F(fahr) 온도 : %d\n", fahr);
    printf("C(celsius) 온도 : %2f\n", celsius);
    return 0;
}