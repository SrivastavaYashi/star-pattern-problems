#include<stdio.h>
int main()
{
    int i,j,p=0;
    char str[6]="MySirg";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=18;j++)
        if((j>=2-i && j<=6+i) || (j>=12-i && j<=16+i))
        printf("*");
        else
        printf(" ");

        printf("\n");
    }
    for(i=0;i<=9;i++)
    {
        for(j=0;j<=18;j++)
         if(j>=i && j<=18-i)
        { if((i==0) && (j>5 && j<12))
         printf("%c",str[p++]);
         else
         printf("*");
        }
        else
        printf(" ");

        printf("\n");
    }
        
    }
