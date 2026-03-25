#include <avr/interrupt.h>
#include <avr/io.h>

volatile uint8_t txFlag = 0;
volatile uint8_t txData = 0;

uint8_t getch(void)
{
    uint8_t data;
    while ((UCSR0A & 0x80) == 0)
        ;
    data = UDR0;
    UCSR0A |= 0x08;
    return data;
}

int main(void){
    uint8_t numbers[] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7C, 0x07, 0x7F, 0x67, 0x77, 0x7C, 0x39, 0x5E, 0x79, 0x71, 0x80};
    uint8_t rx_data;
    DDRA= 0xFF;

    UCSR0A = 0x00;
    UCSR0B = 0x18;
    UCSR0C = 0x16;

    UBRR0H = 0x00;
    UBRR0L = 0x07;

    while (1)
    {
        rx_data = getch();
        if((rx_data >= 0x30) && (rx_data <= 0x39))
        {
        PORTA = numbers[rx_data - 0x30];
        }
    }
    return 0;
}