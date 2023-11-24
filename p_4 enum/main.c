#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum day{Sun,Mon,Tue=100,Wed,Thu,Fri,Sat};
    printf("%d\n",Sun);
    printf("%d\n",Mon);
    printf("%d\n",Tue);
    printf("%d\n",Wed);
    printf("%d\n",Thu);
    printf("%d\n",Fri);
    printf("%d\n",Sat);
    return 0;

}
