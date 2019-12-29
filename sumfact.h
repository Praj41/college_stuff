#include<stdio.h>

int fact();

void calc_fs()
{
    int n , sum = 0;
    printf("Enter the number\n");
    scanf("%d" , &n);
    for(int i = n ; i > 0 ; i--)
    {
        sum += fact(i);
    }
    printf("%d\n",sum);
}

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}