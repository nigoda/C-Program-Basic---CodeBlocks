#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    f = fopen("C:\\Users\\uig43645\\Desktop\\p_24 file_access\\Text1.text","w");

    if(f==NULL)
        printf("Error!");
    else{
        fprintf(f,"%s\n","This is the first program in the handling");
        fputc('A',f);
        fputs("\nDemonstraction for fputs function",f);
    }
    fclose(f);
    return 0;
}


