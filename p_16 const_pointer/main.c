#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 9;
    int *const ptr=&i;

    printf("%d",++(*ptr)); // value
    //printf("%p",++(ptr)); // Address
}

// const int *ptr --- Add(yes) and Values(no)
// int *const ptr --- Add(no) and Values(yes)
// const int *const ptr --- Add(no) and Values(no)
