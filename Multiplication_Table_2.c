#include<stdio.h>
int main()
{
    int a,b,n,i;
    scanf("%d%d",&n,&a);
    for(i=1;i<=a;i++)
    {
        b=n*i;
        printf("%d x %d = %d
",n,i,b);
    }
}