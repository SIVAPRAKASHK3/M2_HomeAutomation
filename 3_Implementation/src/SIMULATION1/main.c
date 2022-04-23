/*
 */
//#define F_CPU 8000000UL
#include <avr/io.h>
#include "HEADER_AUTO.h"
#include <util/delay.h>
#define enable            5
#define registerselection 6
int main(void)
{
/*DDRA=~_BV(PC0);
PORTC=0x00;
DDRD=0xff;*/
//ADC_Init();
  send_a_command(0x01); //Clear Screen 0x01 = 00000001
    _delay_ms(50);
    send_a_command(0x38);
    _delay_ms(50);
    send_a_command(0b00001111);
    _delay_ms(50);
DDRD|=(1<<PD2);
DDRD|=(1<<PD3);
DDRD|=(1<<PD5);
DDRD&=~(1<<PD1);
DDRD|=(1<<PD4);
PORTD|=(1<<PD1);
//DDRD&=~(1<<PD5);
DDRC&=~(1<<PC2);
//USARTINIT(103);
 //InitADC();
//int temp,m=0;
//char SHOWA [16];
while(1)
    {
uART();

       // AUTOWRITE(0);
      //  value=ADC_Read(2);

 //temp=(ReadADC(1));
/*if(!(PIND&(1<<PD1))){
    PORTD|=1<<(PD4);
   // uART();
    //USARTINIT(103);
}
else{
      PORTD&=~(1<<PD4);
  //    USARTINIT(103);*/
}}
void uART(){
    char INPUT;

    USARTINIT(103);
INPUT=AUTOREAD(0);
  /*  send_a_string("Hello");
    send_a_command(0x80 + 0x40 + 0);
   itoa(X,SHOWA,10);
     //send_a_string(SHOWA);
     //send_a_command(0xc4);*/
       if(INPUT=='X')
            {

             PORTD|=(1<<PD4);

        }

        else if(INPUT=='L')
            {
            PORTD|=(1<<PD2);
        }
        else if(INPUT=='F')
        {
              PORTD|=(1<<PD3);
        }
         else if(INPUT=='f')
         {
                  PORTD&=~(1<<PD3);
         }
          else if(INPUT=='l')
          {
                  PORTD&=~(1<<PD2);
         }
       return 0;
}
void send_a_command(unsigned char command)
{
    PORTB = command;
    PORTD &= ~ (1<<registerselection);
    PORTD |= 1<<enable;
    _delay_ms(8);
    PORTD &= ~1<<enable;
    PORTB = 0;
}

void send_a_character(unsigned char character)
{
    PORTB = character;
    PORTD |= 1<<registerselection;
    PORTD |= 1<<enable;
    _delay_ms(8);
    PORTD &= ~1<<enable;
    PORTB = 0;
}
void send_a_string(char *string_of_characters)
{
    while(*string_of_characters > 0)
    {
        send_a_character(*string_of_characters++);

    }}
