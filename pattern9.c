#include<stdio.h>
int main()
{
    int count;
    for(int i=0;i<=3;i++)
    {
        count=0;
        for(int j=0;j<i;j++)
        printf(" ");

        for(int j=i;j<=3;j++)
        printf("%d",++count);

        while(count!=1)
        printf("%d",--count);

        printf("\n");
    }
}