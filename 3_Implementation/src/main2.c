/*
 */
void CONVNT(unsigned char value);
#include <avr/io.h>
unsigned char DATA;
int main(void)
{
DDRB |=(1<<PB1);
    // Insert code
DDRD&=~(1<<PD1);//CLEAR PD1
DDRD|=(1<<PD4);//SET LED
DDRC|=(1<<PC0);//TEMPERATURE INPUT
PORTD|=(1<<PD1);//set PD1 1
ADCSRA=0x87;

ADMUX=0xE0;
    while(1)
  {
      ADCSRA |=(1<<ADSC);
      while(ADCSRA &(1<<ADIF)==0);
      DATA=ADCH;
      CONVNT(DATA);

      if(!(PIND&(1<<PD1))){
    PORTD|=1<<(PD4);
}
else{
     PORTD&=~(1<<(PD4));
}
  }

    return 0;
}

void CONVNT(unsigned char value)
{
    unsigned char x,d1,d2;
    x=value/10;
    d1=x;
    d2=value%10;
    if(((d1*10)+d2)>35)
    {
        PORTB|=(1<<PB1);

    }
    else{
        PORTB &=~ (1<<PB1);

    }
}
