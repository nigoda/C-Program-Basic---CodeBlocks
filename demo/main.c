#include <stdio.h>
#include <stdlib.h>

int mobile_number(void);

int main()
{
    mobile_number();;
}

int mobile_number(){
    char number_1[10] = "8296286656";
    printf("char %s\n",number_1);

    long int number_2 = 8296286656;
    printf("int %ld\n",number_2);
}
