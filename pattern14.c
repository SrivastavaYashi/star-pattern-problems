#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=4;i++)
    {
        printf("*");

        if(i==4)
        for(j=0;j<=3;j++)
        printf("*");

        for(j=1;j<=3;j++)
        if(i==j)
        printf("*");
        else
        printf(" ");

        printf("\n");
    }
}