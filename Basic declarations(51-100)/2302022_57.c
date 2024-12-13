#include<stdio.h>
int main()
{
    int num,r,sum=0,temp;
    printf("The original number=");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
     r=temp%10;
    sum=sum*10+r;
    temp=temp/10;
    }
    printf("The reverse of the said number=%d",sum);
}
