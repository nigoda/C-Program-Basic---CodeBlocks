#include <stdio.h>
#include <stdlib.h>

char* display();

int main()
{
    char* str;
    str = display();
    printf("The string is %s\n",str);
    return 0;
}

char* display()
{
    return "Skill-Lync";
}

