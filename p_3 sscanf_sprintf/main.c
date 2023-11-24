#include <stdio.h>

int SPRINTF(void);
int SSCANF(void);

int main()
{
    printf("----sprintf----\n");
    SPRINTF();
    printf("----sscanf-----\n");
    SSCANF();
}

int SPRINTF(){
    int x =12;
    char a[100];
    sprintf(a," There are %d months in a year \n",x);
    printf("%s",a);

}

int SSCANF(){
    int x,y;
    char z[20];
    char a[100]="1 2 Three";
    sscanf(a,"%d %d %s",&x,&y,z);
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%s\n",z);
}
