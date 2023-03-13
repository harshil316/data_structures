#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,max,min;
    printf("\nEnter the minimum Value:");
    scanf(" %d",&min);
    printf("\nEnter the maximum Value:");
    scanf(" %d",&max);
    for(i=1;i<10;i++){
            printf("\t %d",rand()%(max-min+1)+min);
    }
}
