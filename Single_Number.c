#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    c=c+1;
                }
            }
        }
            if(c>=1)
            {
                continue;
            }
            else
            {
                printf("%d",a[i]);
                break;
            }
    }
}