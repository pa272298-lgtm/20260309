

#include <avr/io.h>
#include <stdint.h>
#include <util/delay.h>
#include <avr/interrupt.h>

// ===== 전역 변수 =====
uint16_t temperaturC, humidityRH;
volatile uint16_t ADC_result = 0;

// ===== 함수 선언 =====
void read_SHT2x(void);
void control_system(void);
void display_all(void);

// ===== 메인 =====
int main(void)
{
    Init_TWI();
    lcdInit();
    SHT2x_Init();

    // PWM (LED)
    DDRB |= (1<<PB4);
    TCCR0 = 0x62;

    // ADC
    ADMUX = 0x40;
    ADCSRA = 0xAF;
    ADCSRA |= (1<<ADSC);

    sei();

    while(1)
    {
        read_SHT2x();
        control_system();
        display_all();

        _delay_ms(200);
    }
}