#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[30],b[30];
    char *found;
    printf("\n Enter a String: ");
    fflush(stdout);
    gets(a);
    printf("\n Enter the string to be searched for: ");
    fflush(stdout);
    gets(b);
    found = strstr(a,b);
    if(found)
    {
        printf("\n Found value: %p", found);
        printf("\n %s is found in %s after %d position",b,a,found-a);
    }
    else
        printf("\n -1 since the string is not found");
    return 0;
}
