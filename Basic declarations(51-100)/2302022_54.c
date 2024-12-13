#include<stdio.h>
int main()
{
    float c,i;
    printf("Input the distance in cm:");
    scanf("%f",&c);
    i=c/2.54;
    printf("Distance of %.0f cms is =%.2f inches",c,i);
}
