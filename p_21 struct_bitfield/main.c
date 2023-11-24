#include <stdio.h>
#include <stdlib.h>

struct bcm{
int door_sw;
int light_sw;
};

struct bcm_bf{
int door_sw:1;
int light_sw:1;
};



int main()
{


    struct bcm data1;
    data1.door_sw=1;
    data1.light_sw=0;
    printf("with out bitfield : %d\n",sizeof(data1));

    struct bcm_bf data2;
    data2.door_sw=1;
    data2.light_sw=0;
    printf("with bit field : %d\n",sizeof(data2));

}
