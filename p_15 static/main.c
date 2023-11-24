#include <stdio.h>
#include <stdlib.h>

void sum(){
    static int a = 10;
    static int b = 24;
    printf("%d %d \n",a,b);
    a++;
    b++;
}

int main()
{
    int i;
    for(i=0;i<3;i++)
    {
        sum();
        }

}
