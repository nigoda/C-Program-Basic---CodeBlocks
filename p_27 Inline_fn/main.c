#include <stdio.h>
#include <stdlib.h>

//int multiply(int , int);
static inline int multiply(int a, int b)
{
    return a*b;
}


int main()
{
    //int (*ptr)(int, int) = &multiply
    //int result = (*ptr)(5,6)

    printf("The result of multiplication is %d\n",multiply(5,6));
    return 0;
}
