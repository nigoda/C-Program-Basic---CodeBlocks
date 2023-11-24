#include <stdio.h>
#include <stdlib.h>

int sum(int num1, int num2);
int sub(int num1, int num2);
int mult(int num1, int num2);
int div_(int num1, int num2);

int main()
{
    int x,y,choice,result;
    int (*ope[4])(int,int);
    ope[0] = sum;
    ope[1] = sub;
    ope[2] = mult;
    ope[3] = div_;
    printf("Enter two integer nymber: ");
    scanf("%d%d", &x,&y);
    printf("Enter 0 to sum, 1 to substract, 2 to multiply, or 3 to divide: ");
    scanf("%d", &choice);
    result = ope[choice](x,y);
    printf("%d",result);
    return 0;
}

int sum(int x, int y){return(x+y);}
int sub(int x, int y){return(x-y);}
int mult(int x, int y){return(x*y);}
int div_(int x, int y){if(y!=0) return(x/y);else return 0;}
