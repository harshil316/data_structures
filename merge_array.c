#include<stdio.h>
 #define n 10
int i,j;
void merge(int a[],int b[])
{
    int c[10];
    for(i=0;i<5;i++)
        c[i]=a[i];
    for(i=0;i<5;i++)
        c[i+5]=b[i];
    printf("\n merged array:");
    for(i=0;i<n;i++)
        printf("%d \t",c[i]);
    selection_sort(c);
}
void printArray(int a[])
{
    printf("\nafter sort...");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n");
}
void selection_sort(int c[])
{
    int tmp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(c[j]>c[j])
            {
                tmp=c[j];
                c[j]=c[j];
                c[j]=tmp;
            }
        }
    }
    printArray(c);
}
int main()
{
    int a[5]={15,26,86,93,10},b[5]={33,44,55,66,77};
    merge(a,b);
}