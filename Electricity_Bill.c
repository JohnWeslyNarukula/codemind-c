#include<stdio.h>
int main()
{
    int u;
    float e;
    scanf("%d",&u);
    printf("Units Consumed: %d
",u);
    if(u<=199)
    {
        printf("Cost per Unit: 1.20
");
        e=u*1.20;
    }
    else if(u>=200 && u<400)
    {
        printf("Cost per Unit: 1.40
");
        e=u*1.40;
    }
    else if(u>=400 && u<600)
    {
        printf("Cost per Unit: 1.60
");
        e=u*1.60;
    }
    else if(u>=600 && u<800)
    {
        printf("Cost per Unit: 1.80
");
        e=u*1.80;
    }
    else 
    {
        printf("Cost per Unit: 2.00
");
        e=u*2.00;
    }
    printf("Bill: %.2f
",e);
    float s,t;
    if(e>=400)
    {
        s=(e*15)/100;
    }
    else
    {
        s=0.0;
    }
    printf("Surcharge: %.2f
",s);
    t=e+s;
    printf("Total Amount: %.2f",t);
}