#include<stdio.h>
int main()
{
    int arr[10],size;
    printf("\n Enter an Elements of Array: ");
    scanf(" %d",&size);
    int i=0;
    while(i<size)
    {
        scanf(" %d",&arr[i]);
        i++;
    }
    int j=0;
    while(j<size)
    {
        printf(" %d",arr[j]);
        j++;
    }
    // printf("\n Array:",arr);
    return 0;
}