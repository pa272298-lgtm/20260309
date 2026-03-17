#include <stdio.h>
#include <unistd.h>

int main(void)
{
    char ch = 'a';
    printf("프로그램 시작\n"); //time -> 프로그램 시작
    putchar(ch); // time -> 버퍼에 a가 저장
    fflush(stdout);
    sleep(1);  // delay -> 1초 대기
    printf("putchar 실행후\n");  // a, putchar 실행후 같이 출력
    putc(ch, stdout);  
    fflush(stdout);
    sleep(1);
    char *string1 = "스트링1 배열입니다.";
    puts(string1); // puts은 작동 방식이 마지막에 개행을 자동 추가한다.
    sleep(1);
    printf("프로그램 끝입니다.");
    fputs(string1, stdout); // fputs는 개행 추가가 없다.
    sleep(1);
    printf("프로그램 끝입니다.");
    return 0;
}