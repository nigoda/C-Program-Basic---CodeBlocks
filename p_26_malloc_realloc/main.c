#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr;s
    ptr = (char *) malloc(10);
    strcpy(ptr,"Programming");
    printf("%s  Address =%u\n",ptr,ptr);

    ptr = (char *) realloc(ptr,20);
    strcat(ptr, "In 'C'");
    printf("%ss  Address =%u\n",ptr,ptr);

    free(ptr);
    return 0;
}
