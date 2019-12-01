
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
    if (status == 1)
    {
        UART_RE = 1;
        UART_DE = 1;
    }
    else
    {
        UART_RE = 0;
        UART_DE = 0;
    }
}