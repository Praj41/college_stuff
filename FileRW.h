#include <stdio.h>
#include <stdlib.h>


void flew()
{
    FILE *f1, *f2;
    char c;
    f1 = fopen("C:\\Users\\ADMIN\\CLionProjects\\college_stuff\\newf.txt","r");
    f2 = fopen("C:\\Users\\ADMIN\\CLionProjects\\college_stuff\\newfw.txt","w");
    while(1)
    {
        c = fgetc(f1);
        if(c==EOF) {
            printf("End of file encountered copy finished");

            break;
        }
        else
            fputc( c , f2 );
    }
    fclose(f1);
    exit(0);
}