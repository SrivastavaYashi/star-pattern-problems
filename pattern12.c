#include<stdio.h>
int main()
{
    int i,j;
    char count;
    for(i=0;i<=3;i++)
    {   count='A';
        for(j=1;j<=3;j++)
        if(j<=i)
        printf(" ");
        for(j=i;j<=3;j++)
        printf("%c",count++);
        count--;
        while(count!='A')
        {
            printf("%c",--count);
        }
        printf("\n");
    }
 
}