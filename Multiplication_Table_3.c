#include<stdio.h>
int main()
{
    int a,b,i,n,c;
    scanf("%d%d%d",&n,&a,&b);
    for(i=a;i<=b;i++)
    {
        c=i*n;
         printf("%d x %d = %d
",n,i,c);
    }
   
}