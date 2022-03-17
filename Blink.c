#include<MSP430.h>
void delay(unsigned int);
void main()
{
	WDTCTL=WDTPW|WDTHOLD;
	P2DIR=0x20;
	P2OUT=0XFF;
	while(1)
	{
		P2OUT=0x00;
		delay(1000);
		P2OUT=0XFF;
		delay(1000);
	}
}
void delay(unsigned int a)
{
	unsigned int i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<100;j++);
	}
}