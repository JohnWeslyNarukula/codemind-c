#include<stdio.h>
int main()
{
    int a,b,c,i,d,sum=1;
    scanf("%d%d",&a,&b);
    i=2;
    if(a>b)
    {
        c=a;
    }
    else
    {
        c=b;
    }
    while(i<c)
    {
       if(a%i==0&&b%i==0)
       {
         sum=sum*i;
         a=a/i;
         b=b/i;
       }
       else
       {
           i++;
       }
       d=sum*a*b;
    }
    printf("%d",d);
}