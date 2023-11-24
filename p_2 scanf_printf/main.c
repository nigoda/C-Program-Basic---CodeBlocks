#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y,n;
   char z[20];
   n=scanf("%d %d %s", &x,&y,z);
   printf("%d\n",n);

   scanf("%s",z);
   n = printf("%s",z);
   printf("\n%d",n);
}
