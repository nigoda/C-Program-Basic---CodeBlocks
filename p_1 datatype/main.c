#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=66;
    char p = 'p';
    float y = 73.4;
    int z = -67;

    printf("\n Integer and Character value of x :%d -->%c",x,x);
    printf("\n Integer and Character value of p :%d -->%c",p,p);
    printf("\n Integer and Hexa value of x      :%d -->%x",x,x);
    printf("\n Integer and Octal value of x     :%d -->%o",x,x);
    printf("\n Integer and float value of y     :%.2f -->%d",y,y);
    printf("\n Integer and unsigned value of z  :%d -->%u",z,z);
    return 0;
}
