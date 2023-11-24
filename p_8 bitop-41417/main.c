#include <stdio.h>
#include <stdlib.h>

int main()
{
int a=41417;
int b=a&~(1<<3);    //RESET 3RD
int c=a|(1<<4);     //SET 4TH BIT
int d=a^(1<<4);     //TOGGLE 4TH BIT
int e=(a>>6)&1;     //status of 6th bit
int f=((a&(1<<6))>>6);

printf("reset  = %d\n",b);
printf("set    = %d\n",c);
printf("toggle = %d\n",d);
printf("status1= %d\n",e);
printf("status2= %d\n",f);
 }
