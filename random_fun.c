#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,min,max;
    printf("\n enter minimum value:");
    scanf("%d",&min);
    printf("\n enter maximum value:");
    scanf("%d",&max);
    for(i=1;i<=10;i++)
       printf("%d\t",(rand() % (max - min +1)) + min); 
    printf("\n"); 
}