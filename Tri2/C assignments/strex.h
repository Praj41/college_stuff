#include<stdio.h>

struct stud
{
    int rno;
    char name[20];
    int mks[3];
};

int input(int i , int j)
{
    printf("\nEnter marks for student %d subject %d:\n" , i , j);
    scanf("%d" , &i);
    return i;
}

float avg(int a , int b , int c)
{
    return (a+b+c)/3;
}

void stddta()
{
    int k;
    printf("\nEnter number of students\n");
    scanf("%d" , &k);
    struct stud S1[k];
    int i , j;
    for(i = 1 ; i <= k ; i++)
    {
        printf("\nEnter roll no of student %d\n" , i);
        scanf("%d" , &S1[i-1].rno);
        printf("\nEnter name of student %d\n" , i);
        scanf("%s" , S1[i-1].name);
        for(j = 1 ; j <= 3 ; j++)
        {
            S1[i-1].mks[j-1] = input(i,j);
        }
    }
    for(i = 0 ; i < k ; i++)
        printf("%d\t%s\t%d\t%d\t%d\t%f\n" , S1[i].rno , S1[i].name , S1[i].mks[0] , S1[i].mks[1] , S1[i].mks[2] , avg(S1[i].mks[0] , S1[i].mks[1] , S1[i].mks[2]));
}