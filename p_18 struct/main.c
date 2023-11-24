#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    float y;
    double z;
    }demo;


struct exmp{
    int p;
    float q;
    double r;
    char* name;
    char z[];
}c;



int main()
{
    demo a;
    a.x = 5;
    printf("Value of x is: %d\n",a.x);

    demo k[2];
    k[0].x = 5;
    k[1].x = 6;
    printf("Value of k[0].x is: %d\n",k[0].x);
    printf("Value of k[1].x is: %d\n",k[1].x);

    struct exmp b;
    b.p = 10;
    printf("Value of q is: %d\n",b.p);

    c.q = 4.0;
    printf("Value of p is: %f\n",c.q);
    c.name = "nishanth";
    printf("Value of name is: %s\n",c.name);
    strcpy(c.z, "gowda");
    printf("Value of z is: %s\n",c.z);

    return 0;
}
