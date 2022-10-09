#include<stdio.h>
int main()
{
    int i=0,j=0,p=0,x;
    for(i=0;i<=3;i++)
    {x=0;
    for(j=0;j<3-i;j++)
    printf(" ");

    for (p=0;p<=i;p++)
    printf("%d",++x);
    
    while(x!=1)
    printf("%d",--x);
    
    printf("\n");
    }
}