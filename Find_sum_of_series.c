#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    float sum=0;
    for(float i=1;i<=N;i++)
    {
         sum = sum + (1/i);
    }
    printf("%.2f",sum);
}