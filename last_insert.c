#include<stdio.h>
int pos=0,a[10],i;
void lastinsert(int n)
{
    a[pos++]=n;
}
void print()
{
    for(i=0;i<pos;i++)
    {
        printf("\n\t%d",a[i]);
    }
}
int main()
{
    int n;
    lastinsert(0);
    lastinsert(1);
    lastinsert(2);
    lastinsert(3);
    lastinsert(4);

    print();
}