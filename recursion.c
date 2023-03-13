#include<stdio.h>
int recur(int n)
{
    printf("\n\t start bulb %d",n);
    if(n<3)
    recur(n+1);
    return -1;
    printf("\n\t exit from %d",n);
}
int main()
{
    printf("\n before main");
    recur(1);
    printf("\n after main");
}