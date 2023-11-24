#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)


struct exmp{
    int p;
    float q;
    double r;
    char* name;
    char z[];
}c;


int main()
{
    printf("%u",sizeof(c));
    return 0;
}
