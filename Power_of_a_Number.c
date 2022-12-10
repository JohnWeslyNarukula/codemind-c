#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int a=pow(x,y);
    int b=a%z;
    printf("%d",b);
}