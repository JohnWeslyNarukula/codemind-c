#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int a;
    a=x/(y*30);
    if(a>0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}