#include<stdio.h>
int main()
{
 int p,r,t;
 float interest;
 printf("p=");
 scanf("%d",&p);
 printf("r=");
 scanf("%d",&r);
 printf("t=");
 scanf("%d",&t);
 interest=(p*r*t)/100;
printf("Simple interest:%.2f",interest);
}
