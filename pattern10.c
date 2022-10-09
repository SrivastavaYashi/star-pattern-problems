#include<stdio.h>
int main()
{
    int i,j,count=0;
    for(i=0;i<=3;i++)
    {   count=0;
        for(j=0;j<=6;j++)
        if(j<=3-i)
        printf("%d",++count);
        if(i==0)
        count--;
        else
        {   
            for(j=0;j<=6;j++)
            if(j>=4-i && j<=2+i)
            printf(" ");
        }
        while(count)
        {   
            printf("%d",count--);
        }
      printf("\n");
    }

}