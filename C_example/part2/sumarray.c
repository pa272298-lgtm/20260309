// random으로 int  배열 10개를 만들어서 값을 넣고, 총합을 계산하는 프로그램 만들기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int nums[10];
    int sum = 0;
    srand(time(NULL));
    for(int i = 0; i < 10; ++i)
    {
        nums[i] = rand() % 6 + 1;
        printf("%d\n", nums[i]);
    }
    for (int i = 0; i < 10; ++i)
    {
        sum += nums[i];
    }
    printf("\n 배열의 총합은 %d이다. \n", sum);

    return 0;
}