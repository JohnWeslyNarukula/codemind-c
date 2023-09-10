#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 1 ;i <= (n-1) ; i++)
    {
        for(int j = 1 ; j<=i ;j++)
        {
            if(j==i||j==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("
");
    }
    for(int k =1;k<=n;k++)
        {
            printf("*");
        }
}