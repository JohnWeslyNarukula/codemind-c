#include<stdio.h>
int main()
{
    int n,b;
    scanf("%d%d",&n,&b);
    int a[n][b],i,j,m=0,m1=0,s=0,s1=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<b;j++)
        {
           s=s+a[i][j]; 
        }
        if(m<s)
        {
            m=s;
        }
    }
    for(i=0;i<n;i++)
    {
        s1=0;
        for(j=0;j<n;j++)
        {
            s1=s1+a[j][i];
        }
        if(m1<s1)
        {
            m1=s1;
        }
    }
    if(m>m1)
    printf("%d",m);
    else 
    printf("%d",m1);
    
}
