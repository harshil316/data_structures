#include<stdio.h>
int pos=0,a[4],n,i;
void firstinsert(int n)
{
    int len=sizeof(a)/sizeof(a[0]);
    for(i=len-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=n;
}
void lastinsert(int n)
{
    pos=sizeof(a)/sizeof(a[0]);
    a[pos++]=n;
}
void output()
{
    i=0;
    int len=sizeof(a)/sizeof(a[0]);
    while(i<=len)
    {
        printf("\n\t %d",a[i]);
        i++;
    }
}
int main()
{
    int n;
    firstinsert(10);
    firstinsert(11);
    firstinsert(12); 
    firstinsert(13);
    firstinsert(14);  
    output();
    return 0;
}