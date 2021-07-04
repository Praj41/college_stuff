
#include <stdio.h>
#include <stdlib.h>

void swptr(int *x , int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}


void swpr()
{
    int a , b;
    printf("Enter x : \n");
    scanf("%d", &a);
    printf("Enter y : \n");
    scanf("%d", &b);
    printf("Original numbers : x = %d\ty = %d\n" , a , b);
    swptr(&a , &b);
    printf("swapped numbers : x = %d\ty = %d" , a , b);
    exit(0);
}