#ifndef HEADER_AUTO_H_INCLUDED
#define HEADER_AUTO_H_INCLUDED

void InitADC();
uint16_t ReadADC(uint8_t ch);
void AUTOWRITE(char DATA);
char AUTOREAD();
void USARTINIT(uint16_t BAUDRATE);
void ADC_Init();
int ADC_Read(char channel);
#endif // HEADER_AUTO_H_INCLUDED
