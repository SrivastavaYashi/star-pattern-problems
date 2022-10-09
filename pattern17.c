#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=4;i++)
    {

        if(i==0)
        for(j=0;j<=8;j++)
        printf("*");
        else
        {
          for(j=0;j<=8;j++)
          if(j==i || j==8-i)
          printf("*");
          else
          printf(" ");
        }

        printf("\n");
    }
}