#include <stdio.h>

int add(int a, int b);          // <- 함수 선언 add    /   함수 포인트 정의는 같은  argument 사용해야함.
int substract(int a, int b);

int main(void)
{
    int (*fp)(int, int);
    fp = add;                   // fp ->  data(주소) 함수는 주소연산자 붙일 필요X
    int re;
    re = (*fp)(4, 3);
    re = fp(4, 3);
    printf("결과 : %d\n", re);

    fp = &substract;            // & = 주소연산자
    re = (*fp)(4, 3);
    printf("re : %d\n", re);
    return 0;
}
int add(int a, int b){
    return a + b;
}
int substract(int a, int b)
{
    return a - b;
}