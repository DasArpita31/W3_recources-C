#include<stdio.h>
int main()
{
    int x,i,current,max,min,sum=0;
    float avg;
 printf("NUmber of positive values entered is ");
 scanf("%d",&x);
  for(i=1;i<=x;i++)
  {
    scanf("%d",&current);
        if(i==1){   max=current;
            min=current;
        } else {
           if(current>max) max = current;
           else if(current<min) min = current;
        }
        sum=sum+current;
        avg=sum/x;
  }

  printf("Maximum value entered is %d\n",max);
  printf("Minimum value entered is %d\n",min);
  printf("Average value is %.4f",avg);
}
