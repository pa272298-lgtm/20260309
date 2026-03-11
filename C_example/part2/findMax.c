// 최댓값 찾기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXIDEX 3

int main(void)
{
    int nums[MAXIDEX];
    srand(time(NULL));
    for(int i = 0; i < MAXIDEX; ++i){
        nums[i] = rand() % 1000;
        printf("%d ", nums[i]);
    }

    int max;
    max = nums[0];
    for (int i = 0; i < MAXIDEX;++i){
        if (max < nums[i]){
            max = nums[i];
        }else{
            max = max;
        }
    }
    printf("최댓값 : %d\n", max);
    return 0;
}