#include<stdio.h>
int main()
{
    int n,a,i,b;
    scanf("%d",&a);
    for(i=1;i<=12;i++)
    {
        b=a*i;
        printf("%d x %d = %d
",a,i,b);
    }
}