
#include"UART1.h"
#include <xc.h>




void Init_UART(void)
{
    TXSTA1 = 0x00;
    RCSTA =0x00;
    TXEN = 1;
    SPEN = 1;
    CREN = 1;
    SPBRG = 25;

}


void UART_enableTransmit(unsigned char status)
{
   
}