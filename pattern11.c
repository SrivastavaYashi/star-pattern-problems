#include<stdio.h>
int main()
{
    int count;
    for(int i=0;i<=4;i++)
    { 
        count=64;
        for(int j=0;j<4-i;j++)
        printf(" ");

        for(int j=0;j<=i;j++)
        printf("%c",++count);

        while(count!=65)
        printf("%c",--count);

        printf("\n");
    }
}