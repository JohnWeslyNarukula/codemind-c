#include<stdio.h>
main()
{
    
    int num,r,Id=0;
    scanf("%d",&num);
    
    while(num > 0)
{
    r=num%10;
    if(Id < r) {
        Id = r;
    }
    num=num/10;
}
printf("%d",Id);
}