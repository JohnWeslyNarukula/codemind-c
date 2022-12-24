#include<stdio.h>
int main()
{
    int n,r,sum=0,sqr;
    scanf("%d",&n);
    sqr=n*n;
    while(sqr!=0)
    {
        r=sqr%10;
        sqr=sqr/10;
        sum=sum+r;
    }
    if (sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}