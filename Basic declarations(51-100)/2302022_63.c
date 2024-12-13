#include<stdio.h>
#include<math.h>
int main()
{
    int i,x,j,s1,sum=0;
    printf("Input a positive number less than 100:");
    scanf("%d",&x);
    j=1;
    for(i=1;j<=x;i++)
   {
       sum+=j*j*j*j;
     j+=i;
   }
    printf("Sum of the series is %d",sum);
}
