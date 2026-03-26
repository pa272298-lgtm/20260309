#include "lcd.h"
#include <avr/interrupt.h>
#include <avr/io.h>
#include <stdio.h>
#include <string.h>
#include <util/delay.h>

volatile uint16_t ADC_result = 0;

int main(void)
{
    DDRB = 0x10;
    TCCR0 = 0x62;
    TCNT0 = 0x00;
    ADMUX = 0x41;
    ADCSRA =0xAF;
    ADCSR |= 0x40;
    sei();

    lcdInit();
    lcdGotoXY(0, 0);
    lcdPrintData("Variable register", 15);

    while (1)
    {
        OCR0 = (ADC_result - 40) * 255 / 700;
        if (ADC_result < 40)
        {
            OCR0 = 0;
        }
        else if (ADC_result > 700)
        {
            OCR0 = 255;
        }
        else{
            OCR0 = (ADC_result - 40) * 255 / 660;
        }
        
        {
            char buf[16];
            sprintf(buf, "R:%u ", ADC_result);
            lcdGotoXY(0, 1);
            lcdPrintData(buf, strlen(buf));
        }
        _delay_ms(200);
    }
    return 0;
}

ISR(ADC_vect)
{
    cli();
    ADC_result = ADC;
    sei();
}