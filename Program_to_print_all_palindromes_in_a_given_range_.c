#include<stdio.h>
int sowjii(int n)
{
    int r=0,m=n;
    while(n>0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    if(r==m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        if(sowjii(i))
        {
            printf("%d ",i);
        }
    }
}
