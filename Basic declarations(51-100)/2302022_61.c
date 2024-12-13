#include<stdio.h>
int main()
{
  double  x,y,result;
  printf("Input value of x:");
  scanf("%lf",&x);
  y=(1/x);
  result=sin(y);
  printf("Value of sin(1/x) is %.4lf",result);
}
