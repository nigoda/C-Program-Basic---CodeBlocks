#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    /*printf("\n Name of the program is %s",argv[0]);
    if(argc<2)
        printf("\n No Arguments is passed through the command line");
    else{
    printf("\n First Argument is %s",argv[1]);
    }*/
    int sum = (atoi(argv[1]))+ (atoi(argv[2]));
    printf("%d",sum);
}
