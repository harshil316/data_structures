#include<stdio.h>
int main()
{
    int a=10;
    void test(int);
    test(a);
    printf("%4d",a);
}
void test(int a)
{
    printf("\n test:");
    a*=a;
    printf("%4d",a);
}