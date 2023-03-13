#include<stdio.h>
int pos=0,a[5],n,i;
void firstInsert(int n)
{   
   int len = sizeof(a) / sizeof(a[0]) ;
    for(i=len-1;i>=pos;i--){
        a[i + 1]=a[i];
    }
        a[pos] = n;
}
void middleInsert(int n)
{   
    printf("Enter the position:");
    scanf("%d",&pos);
    int len = sizeof(a) / sizeof(a[0]) ;
    for(i=len-1;i>=pos-1;i--){
        a[i + 1]=a[i];
    }
        a[pos-1] = n;
}
void lastInsert(int n)
{
    pos = sizeof(a) / sizeof(a[0]);
    a[pos++] = n;
}
void output()
{
    i=0;
    int len = sizeof(a) / sizeof(a[0]);
    while (i<=len)
    {
        printf("\n\t %d",a[i]);
        i++;      
    }    
}
int main()
{
    int n;    
    firstInsert(10);
    firstInsert(11);
    firstInsert(12);
    firstInsert(13);
    firstInsert(14);
    middleInsert(110);
    output();    
    return 0;    
}