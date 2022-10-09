#include<stdio.h>
int main()
{
    int i,j;
    char alpha;
    for(i=0;i<=6;i++)
    {   alpha='A';
        for(j=0;j<=12;j++)
        if(j<=6-i)
        printf("%c",alpha++);
        if(i==0)
        alpha-=2;
        else
        {
          alpha--;
          for(j=1;j<=11;j++)
          if(j<=(2*i)-1)
          printf(" ");
        }
        while(alpha!=64)
        {
            printf("%c",alpha--);
        }
        printf("\n");
    }
}