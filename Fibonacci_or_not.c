#include<stdio.h>
int main()
{
    int a=0,b=1;
    int n;
    scanf("%d",&n);
    int fib=0;
    while(a<=n)
    {
        if(a==n)
        {
            fib=1;
            break;
        }
        int c=a+b;
        a=b;
        b=c;
    }
    if(fib==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}