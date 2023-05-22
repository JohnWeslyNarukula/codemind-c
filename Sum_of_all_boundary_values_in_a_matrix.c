#include<stdio.h>
int main()
{
    int n,b;
    scanf("%d%d",&n,&b);
    int a[n][b],i,j,s=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<b;j++)
        {
            if(i==0 || i==n-1 || j==0 || j==n-1)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("%d",s);
}

