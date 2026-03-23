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
<<<<<<< HEAD
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



=======
- 과제 : 마크다운 정리UTUBE 마크다운 블로그
- 과제 : mermaid 로 그래프 그리기 해보기

0310
- makefile
- 연산자 - oddEven, string, triangle, triangle2, compare, compare2
- 1교시: 복습
- 2교시: make 사용법, stringCopy,
- 3교시: 산술 연산자, 관계 연산자, 논리연산자, C 언어에서의 true 와 false, stdbool 사용법
- 4교시: oddEven triangle triangle2 compare compare2 작성
- 5교시: 타입 캐스팅 fahr2Celcius, sizeof 연산자
- 6교시: 증감연산자 increment, 음수의 표현, 폰 노이만의 바이트머신
- 7교시: 비트연산, fourbit, fourbit2, genderRatio
- 8교시: 대소문자 구분, 알파벳 구분
- 과제 : make 문법, vscode 단축키

<0312 part3>
포인터 (변수) -> 주소값을 저장하는 변수
선언 int *pvalue / pvalue -> 주소 / *pvalue -> 100
<포인터 사용한 구조(C언어)>
1. 함수 함수포인터 함수명=포인터
2. 배열 abc[] 배열명=포인터
<함수의 인자(argument)로 참조연산자 쓰는 5가지 상황>
1. 함수를 호출하는 쪽(call) 변수를 호출당하는 쪽에서 변경할 때
2. 배열을 인자로 넘길 때 (index를 같이 넘긴다)(*필수)
3. 구조체를 인자로 넘길 때 (*선택)
4. 사용자 정의 연산(함수)을 인자로 넘길 때 ex)qsort.c
5. 임의의 자료를 넘길 때  ex)(void*)

<0313>
Cmake->baseballGame


<0316>
대소문자 구분
사용자 정의 타입만 대문자
소문자 - 식별자, 함수명, 변수명, *built-in type -> 소문자
- struct: 사용자 정의 타입 -> 데이터를 묶어서 다룰때
- typedef A B: 별명 붙이기(가독성 높아짐)

<0317>
표준 입출력 함수 - read() 입력 / write() 출력
입력 get / 출력 put

*동적할당 allocate -> 메모리 변수, 상수 지정

<0318>
자료구조 DS
-Stack (LIFO last in first out)
-queue (FIFO first in first out)
-> 속도,순회 빠름 
-list (자기참조 동적할당)
-> 삽입,삭제가 쉽다

<0319>
IoT 펌웨어 -> MCU -> 스마트홈, 스마트팜, 스마트팩토리, 로봇
네트워크 - 소켓통신 버퍼(레지스트리)

MQTT 소켓(TCP UDP) -> 브로커(서버)

<0323>
1️⃣ 마이크로컨트롤러(MCU) 개념
마이크로프로세서 + 메모리 + 주변장치 = 마이크로컨트롤러
하나의 칩 안에 모든 기능이 들어간 소형 컴퓨터
가전제품, 자동차, 로봇 등 거의 모든 전자기기에 사용됨

👉 한 줄 정리
➡️ 제어용으로 쓰는 작은 컴퓨터

2️⃣ 마이크로프로세서 vs MCU
마이크로프로세서: CPU만 있음 (컴퓨터용)
MCU: CPU + 메모리 + 입출력 포함 (임베디드용)

👉 MCU가 더 작고, 싸고, 전력 적게 씀

3️⃣ AVR 마이크로컨트롤러 특징

(중요 시험 포인트🔥)

RISC 구조 → 명령어 단순 → 속도 빠름
하버드 구조 → 프로그램/데이터 메모리 분리
저전력 CMOS 기술
1MHz당 1MIPS 처리속도
다양한 메모리 내장 (Flash, SRAM, EEPROM)

👉 한 줄 정리
➡️ 빠르고, 효율 좋고, 저전력 MCU

4️⃣ AVR 종류 (자주 나옴)
🔹 Tiny
작고 저렴
저성능
간단한 제어용
🔹 Mega ⭐ (중요)
고성능 / 대용량 메모리
다양한 기능
대표적으로 ATMega128
🔹 AT90
중간급 (현재 잘 안 씀)
5️⃣ ATMega128 핵심 정리 ⭐

(시험 단골)

✔ 기본 특징
8비트 MCU
16MHz → 16MIPS 성능
133개 명령어
32개 레지스터
✔ 메모리
Flash: 128KB
SRAM: 4KB
EEPROM: 4KB
외부 메모리 확장 가능
6️⃣ 주요 기능 (주변장치)
타이머/카운터
PWM
ADC (아날로그 → 디지털)
USART, SPI 통신
Watchdog 타이머

👉 한 줄
➡️ 센서, 통신, 제어 다 가능

7️⃣ 클럭 시스템

(페이지 27 기준)

내부 RC
외부 RC
크리스탈
저주파 크리스탈
외부 클럭
8️⃣ 저전력 기능 (Sleep 모드)
Idle
Power-down
Standby 등 6가지 모드

👉 전력 절약용 핵심 기능

9️⃣ 리셋 종류

(시험 자주 나옴)

Power-on Reset
External Reset
Watchdog Reset
Brown-out Reset
JTAG Reset
🔟 활용 분야
가전제품 (전자레인지, 세탁기)
자동차 제어
통신기기
로봇, 산업제어

<0324>