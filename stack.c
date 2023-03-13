#include <stdio.h>
int n = 5, top = -1, stack[7];

void push(int val)
{

    if (top > n - 1)
    {

        printf(":overflow:");
    }
    else
        stack[++top] = val;
}
int pop()
{
    int x;
    if (top <= -1)
        return 0;
    else
        x = stack[top--];
    printf("\n delete no : %d", x);
}
int output()
{
    for (int i = 0; i <= top; i++)
    {
        printf("\n %d %d", i, stack[i]);
    }
}
int main()
{
    push(10);
    push(11);
    push(12);
    push(13);
    printf("\n Before delete:");
    output();
    pop();
    printf("\n After delete:");
    output();

    return 0;
}