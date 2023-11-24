#include <stdio.h>
#include <stdlib.h>
int fact(int );
int main()
{
   int num = 10;
   printf("%d",fact(num));


}

int fact(int n){
if(n!=1)
    return n*fact(n-1);
else
    return n;

}
