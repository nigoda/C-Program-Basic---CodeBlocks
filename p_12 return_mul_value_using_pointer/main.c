#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i=5, j=4, add, sub;
    subfn(i,j,&add,&sub);
    printf("add - %d, sub - %d",add,sub);
}

void subfn(int x, int y, int *a, int *s)
{
    *a = x+y;
    *s = x-y;
}
