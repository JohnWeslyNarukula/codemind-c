#include<stdio.h>
int main()
{
  int r,rev=0,a,c,n;
  scanf("%d",&n);
  a=n;
  while(a!=0)
  {
      r=a%10;
      rev=(rev*10)+r;
      a=a/10;
  }
  if(n==rev) 
  printf("True");
  else
  printf("False");
}
