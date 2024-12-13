#include<stdio.h>
int main()
{
    int i,max,min,current,n;
    printf("Input four numbers:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&current);
        if(i==1){
            max=current;
            min=current;
        } else {
           if(current>max) max = current;
           else if(current<min) min = current;
        }
    }
    printf("Max: %d, Min: %d", max, min);
}
