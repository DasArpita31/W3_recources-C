#include<stdio.h>
int main()
{
    float i,n;
   float sum=0;
    printf("Input the number:");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
    }
    printf("1+1/2+1/3+......+ 1/%.0f=%f",n,sum);


}
