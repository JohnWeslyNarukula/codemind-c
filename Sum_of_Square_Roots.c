#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,i,c=0;
    scanf("%f%f",&a,&b);
    for(i=a;i<=b;i++)
    {
        c=c+sqrt(i);
    }
    printf("%.2f",c);
}