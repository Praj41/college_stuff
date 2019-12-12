#include <stdio.h>

void matad()
{
    int a , b , i , j , k;
    printf("\nEnter the no. of rows\n");
    scanf("%d" , &a);
    printf("Enter the no. of columns\n");
    scanf("%d" , &b);
    int mat[3][a][b];
    printf("\nEnter first matrix\n");
    for(i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < a ; j++)
        {
            for(k = 0 ; k < b ; k++)
            {
                scanf("%d" , &mat[i][j][k]);
            }
        }
        if(i < 1)
            printf("\nEnter next matrix\n");
    }
    for(j = 0 ; j < a ; j++)
    {
        for(k = 0 ; k < b ; k++)
        {
            mat[2][j][k] = mat[0][j][k] + mat[1][j][k];
        }
    }
    printf("\nThe sum is:\n");
    for(j = 0 ; j < a ; j++)
    {
        for(k = 0 ; k < b ; k++)
        {
            printf("%d\t" , mat[2][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}