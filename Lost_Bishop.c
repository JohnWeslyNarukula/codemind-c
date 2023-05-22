#include<stdio.h>
int main()
{
    int n,i,j,k,c=0;
    scanf("%d",&n);
    char a[n][8][8];
    for(k=0;k<n;k++)
    {
        for(i=0;i<8;i++)
        {
            scanf("%s",&a[k][i]);
        }
    }
    for(k=0;k<n;k++)
     {
        c=0;
        for(i=1;i<7;i++)
        {
            for(j=1;j<7;j++)
               {
                if(a[k][i][j]=='.') 
                continue;
                else if(a[k][i][j]=='#')
                    {
                    if(a[k][i-1][j-1]=='#' && a[k][i-1][j+1]=='#' && a[k][i+1][j-1]=='#' && a[k][i+1][j+1]=='#')
                    {
                        c++;
                        printf("%d %d",i+1,j+1);
                        break;
                    }
                }
                if(c==1) break;
            }
            if(c==1) break;
        }
        printf("
");
    }
    return 0;
}
