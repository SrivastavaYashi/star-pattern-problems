#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=9;j++)
        if(j<=4-i)
        printf("*");

        for(j=0;j<=9;j++)
        if(j<2*i)
        printf(" ");
   
        for(j=0;j<=9;j++)
        if(j>=5+i)
        printf("*");
       

        printf("\n");
    }
}