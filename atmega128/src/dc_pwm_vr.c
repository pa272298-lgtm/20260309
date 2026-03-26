#include <util/delay.h>
#include <avr/io.h>
#include <avr/interrupt.h>

volatile uint16_t ADC_result = 0;

int main(void)
{
    DDRD = _BV(PD4) | _BV(PD5);
    DDRB = _BV(PB5);

    TCCR1A = _BV(COM1A1) | _BV(WGM11);
    TCCR1B = _BV(CS11) | _BV(WGM12) | _BV(WGM13);
    // fast pwm, 분주비 8, count는 2MHz
    ICR1 = 800; // 2MHz : 1초 800MHz : x초
    OCR1A = 0; // 800 카운트 하는데 560 까지 -> 70%
    

    ADMUX = 0x41;
    ADCSRA =0xAF;
    ADCSR |= 0x40;
    sei();

    PORTD &= ~_BV(PD5);
    PORTD |= _BV(PD4);

    while (1)
    {
       OCR1A = (uint32_t)ADC_result * 800 / 1024;
       _delay_ms(50);
    }
    return 0;
}

ISR(ADC_vect)
{
    cli();
    ADC_result = ADC;
    sei();
}