#include <avr/io.h>
#define BAUD 9600
#define BAUDRATE ((F_CPU)/(BAUD*16UL)-1)

int BINARY(uint16_t num)
{
    uint16_t binary_num = num; // assign the binary number to the binary_num variable
      int decimal_num=0;
int rem,base=1;
    while ( num > 0)
    {
        rem = num % 10; /* divide the binary number by 10 and store the remainder in rem variable. */
        decimal_num = decimal_num + rem * base;
        num = num / 10; // divide the number with quotient
        base = base * 2;
    }
    return decimal_num;
}
void InitADC()
{
    ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN) | (7<<ADPS0);
}
uint16_t ReadADC(uint8_t ch)
{
    ADMUX = 0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    ADCSRA|=(1<<ADSC);
    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA|=(1<<ADIF);
    return(ADC);
}
void USARTINIT(uint16_t BAUDRAT)
{
    UBRR0H=(BAUDRAT>>8)&0X00ff;
    UBRR0L=BAUDRAT;
    UCSR0C=(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);
    UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}

char AUTOREAD()
{
    while(!(UCSR0A & (1<<RXC0))){

    }
    return UDR0;
}

void AUTOWRITE(char DATA)
{
      while(!(UCSR0A & (1<<UDRE0)));
      UDR0=DATA;
}
