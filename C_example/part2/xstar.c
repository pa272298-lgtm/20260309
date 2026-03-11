//  피라미드 형태 출력 이중 for문 사용

#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 5;++i){
        // * 출력
        for(int j = 1; j <= 5;++j){
            // if(i+j==6 || i==j){
            //     printf("*");
            // }else{
            //     printf(" ");
            // }
            printf((i+j==6||i==j)?"*" : " ");
        }
        printf("\n");
    }
    return 0;
}
