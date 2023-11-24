#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;//(00000101)
    int b = 9;//(00001001)

    //printf("value of c after incrementing: %d\n", ++c);
    printf("a = %d, b = %d\n", a, b);
    printf("a&b = %d\n", a & b); // The result is 00000001 (1)d
    printf("alb = %d\n", a | b); // The result is 00001101 (13)d
    printf("a^b = %d\n", a ^ b); // The result is 00001100 (12)d
    printf("~a = %d\n", a = ~a); // The result is 11111010 (-6)d
    printf("b<<1 = %d\n", b << 1);// The result is 00010010 (18)d
    printf("b>>1 = %d\n", b >> 1);// The result is 00000100 (4)d

    return 0;
}

