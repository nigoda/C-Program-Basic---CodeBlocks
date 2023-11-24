#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = 3;
    int j = &ptr;
    printf("%d\n",j);
    printf("%p\n",j);
    printf("%u\n",j);


    int a =5;
    int *ptrr;
    ptrr = &a;
    printf("%d\n",*ptrr);
    int *b;
    b = ptrr;


    float c=3.0;
    void *ptrf;
    ptrf = &c;
    printf("%f,%d \n",*(float*)ptrf,ptrf);




    float d = 5.5;
    float *ptr1 =&d;
    float **ptr2 = &ptr1;
    printf ("%p\n", ptr1); //ptr
    printf ("%p\n", ptr2); //double ptr
    printf ("%f\n", **ptr2) ; //deref double
    printf ("%f\n", *ptr1); //deref ptr

    return 0;



 //* used in the declaration of pointer. & dereferencing
}
