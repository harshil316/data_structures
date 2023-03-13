#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    void test(int []);
    test(a);
    printf("\n main :");
    for(int i=0;i<5;i++)
    printf("%d4d",a[i]);
}
void test(int a[])
{
    printf("\n test :");
    for(int i=0;i<5;i++)
    {
        a[i]*=a[i];
        printf("%d4d",a[i]);
    }
}