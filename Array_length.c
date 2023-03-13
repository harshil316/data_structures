#include<stdio.h>
int main()
{
    int i=0,j,a[10] = {1,2,3,4,5};
    while (i<=4)
    {
        printf("\n Array: %d",a[i]);
        i++;
    }
    for (j = 0; a[j] != '\0'; j++);
    printf("\n Array length: %d",j);
    return 0;
}