#include <stdio.h>
#include <stdlib.h>
#define n 10
int arr[10], i, j, ele;
void Output(int arr[])
{
    for (int j = 0; j < n; j++)
    {
        printf(" %d", arr[j]);
    }
}
void Bubble_sort(int arr[])
{
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                ele = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = ele;
            }
        }
    }
    printf("\n Bubble_sort:");
    Output(arr);
}
void Selection_sort(int arr[])
{
    int i, j, ele;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                ele = arr[i];
                arr[i] = arr[j];
                arr[j] = ele;
            }
        }
    }
    printf("\n Selection_sort:");
    Output(arr);
}
int main()
{
    int choice, max = 100, min = 1;
    for (i = 0; i < n; i++)
        arr[i] = (rand() % (max - min + 1) + min);
    do
    {

        printf("\nPress 1 for => Bubble Sort");
        printf("\nPress 2 for => Selected Sort");
        printf("\nPress 3 for => Display the Queue");
        printf("\nPress 0 for => Exit");
        printf("\nEnter the Choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Bubble_sort(arr);
            break;
        case 2:
            Selection_sort(arr);
            break;
        case 3:
            Output(arr);
            break;
        case 0:
            break;
        default:
            printf("\nWrong Choice");
            break;
        }
    } while (choice != 0);
    return 0;
}