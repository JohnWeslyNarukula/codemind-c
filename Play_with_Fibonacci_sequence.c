#include<stdio.h>
int main()
{
    int n;
     int a=0,b=1,c=0;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
       
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
      
    }
}