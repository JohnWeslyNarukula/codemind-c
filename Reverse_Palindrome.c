#include<stdio.h>
int rev(int n)
{
    int r=0,m=n;
    while(n>0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    return r;
}
int pal(int n)
{
    int r=0,m=n;
    while(n>0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    if(r==m)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int x=rev(n);
    n=n+x;
    while(pal(n))
    {
        x=rev(n);
        n=n+x;
    }
    printf("%d",n);
}