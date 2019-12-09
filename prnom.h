#include <stdio.h>

int funcal() {
    int a[3];
    int c = 0;
    for(int i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0 ; i < 4 ; i++)
    {
        c = 0;
        for(int j = 1 ; j < a[i] ; j++)
        {
            if(a[i] % j == 0)
                c++;
        }
        if(c > 1)
        {
            printf("Wrong answer%d\n",c);
            break;
        }
        else if(i == 3)
            printf("Correct answer \n");
    }
}