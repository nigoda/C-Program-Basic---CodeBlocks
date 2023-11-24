#include "sub.h"

int main()
{
    int result = 0;
    int result_add = 0;
    int result_mul = 0;
    result =sub(8,5);
    result_add=add(8,5);
    result_mul=mul(8,5);
    printf("result = %d\n",result);
    printf("result_add = %d\n",result_add);
    printf("result_mul = %d\n",result_mul);
    getchar();
    return 0;
}
