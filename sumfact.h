#include<stdio.h>
void calc_fs()
{
    int n , fact = 1, sum = 0;
    printf("Enter the number");
    scanf("%d" , &n);
    for(int i = n ; i > 0 ; i--)
    {
        fact = 1;
        for(int j = i ; j > 0 ; j--)
        {
            fact *= j;
        }
        printf("%d\n",fact);
        sum += fact;
    }
    printf("%d\n",sum);
}