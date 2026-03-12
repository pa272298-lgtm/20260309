# 20260309

---

고려대 개발 양성과정에서 쓰이는 저장소이다.


---

## 2026-03-09

---

- 구글 슬라이드 자기소개
- wls 설치
- VScode. git 설치
- os 설명 (리눅스, wls2 사용하기로 함)
- vscode remote wsl2 연결하고 git clone 하기
- hello world c 프로그램 작성하기
- literal 프로그램 작성 - int d, char c, char* s, octal o, hex h. float f, double lf, long double ldf, long long ll, unsigned int u, unsigned long long llu, pointer p, string s
- limit 프로그램 작성 - int, char,float, double, long double, long long, unsigned int, unsigned long long
- 과제: 

-c make / ninja


0311 part2
반복문 for문 
for (A 초기화 ; C 조건 ; D 실행코드/증감식) // 순서 A->C->B->C
     {                                            ->D->B->C
        B code1                                   ->D->B->C
              2
              ....
     }

while문


0312 part3
포인터 (변수) -> 주소값을 저장하는 변수
선언 int *pvalue / pvalue -> 주소 / *pvalue -> 100
<포인터 사용한 구조(C언어)>
1. 함수 함수포인터 함수명=포인터
2. 배열 abc[] 배열명=포인터
<함수의 인자(argument)로 참조연산자 쓰는 5가지 상황>
1. 함수를 호출하는 쪽(call) 변수를 호출당하는 쪽에서 변경할 때
2. 배열을 인자로 넘길 때 (*필수)
3. 구조체를 인자로 넘길 때 (*선택)
4. 사용자 정의 연산(함수)을 인자로 넘길 때 ex)qsort.c
5. 임의의 자료를 넘길 때  ex)(void*)

