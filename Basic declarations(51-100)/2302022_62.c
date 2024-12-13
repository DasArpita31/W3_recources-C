#include<stdio.h>
int main()
{
    int x,r,sum=0,temp;
  printf("Input a positive number less than 500:");
  scanf("%d",&x);
  temp=x;
 while(temp!=0)
  {
  r=temp%10;
  sum=sum+r;
  temp=temp/10;
  }
  printf("Sum of the digits of %d is %d",x,sum);
}
