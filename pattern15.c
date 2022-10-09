#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<4-i;j++)
        printf(" ");

        for(j=0;j<=4;j++)
        if(i==j)
        printf("*");
     
        if(i==4)
        for(j=0;j<4;j++)
        printf("*");

       for(j=1;j<=3;j++)
       if(i==j)
       printf("*");
       else
       printf(" ");

       printf("\n");
    }
}