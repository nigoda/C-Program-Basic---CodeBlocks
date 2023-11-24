#include <stdio.h>
#include <stdlib.h>

int main()
{FILE *f;
char ch[100];
f= fopen ("C:\\Users\\uig43645\\Desktop\\p_24 file_access\\Text1.text","w+");
if (f== NULL)
    printf("error");
    else{
        fprintf(f,"%s\n","this is first file handling");
        rewind(f);
        fgets(ch,100,f);
        printf("%s",ch);


    fclose(f);
    return 0;
}

}
