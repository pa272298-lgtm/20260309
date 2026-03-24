#include <avr/io.h>

int main(void)
{
    DDRC = 0x0F; //led설정
    DDRE = 0x00; //switch설정
    uint8_t switch0;
    while (1)
    {
        switch0 = PINE; // 0b 0101 0000
        PORTC = switch0 >> 4; // 0b 0000 0101
            // ... 시간이 걸리는 코드
        // ...인터럽트로 스위치 제어
    }
    
}