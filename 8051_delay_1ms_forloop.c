#include<reg51.h>
void MSDelay(unsigned int);
void main(void)
{
  while(1)
  {
  	P1 = 0xFF;
	MSDelay(1);
	P1 = 0x00;
	MSDelay(1);
  }
}
void MSDelay(unsigned int itime)
{
unsigned int i,j;
for(i=0;i<itime;i++)
for(j=0;j<1275;j++);
}