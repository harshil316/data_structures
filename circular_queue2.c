#include<stdio.h>
#define size 5
int q[size];
int front=0,rear=0;
// adding an element
void enqueue(int element)
{
    if((rear+1)%size==front)
        printf("queue is full");
    else
    {
        rear=(rear+1)%size;
        q[rear]=element;    
    }
    printf("\n front : %d \t rear : %d",front,rear);
}
// removing an element
void dequeue()
{
    int x=-1;
    if(front==rear)
    {
        printf("queue is empty\n");
        front=rear=0;
    }
    else
    {
        front=(front+1)%size;
        x=q[front];
    }
    printf("\n deleted element is : %d",x);
    printf("\n front : %d \t rear : %d",front,rear);
}
// display the queue
void display()
{
    printf("\n");
    if(front==rear)
        printf("\nempty");
    else
    {int i=front+1;
    do
    {
        printf("%d\n",q[i]);
        i=(i+1)%size;
    }while(i!=(rear+1)%size);
    }
    printf("\n front : %d \t rear : %d",front,rear);
}
int main()
{
    // dequeue();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    dequeue();
    display();
   
    // enqueue(5);
    // enqueue();
    // enqueue(6);
    // enqueue();
    return 0;
}