/*
 */

#include <avr/io.h>

int main(void)
{

    // Insert code
DDRD&=~(1<<PD1);
DDRD|=(1<<PD4);
PORTD|=(1<<PD1);
    while(1)
  {

      if(!(PIND&(1<<PD1))){
    PORTD|=1<<(PD4);
}
else{
     PORTD&=~(1<<(PD4));
}
  }

    return 0;
}
