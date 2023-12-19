#include <stdio.h>
#include <stdlib.h>
#define NUMBER 1

int main()
{
    #ifdef NUMBER
        printf("NUMBER is Defined");
    #else
        printf("NUMBER is not Defined");
    #endif // NUMBER
    return 0;
}
