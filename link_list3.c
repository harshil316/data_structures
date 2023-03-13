//last delete
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;    
};
void head_count(struct node *head)
{
    int cnt=0;
    if(head==NULL)
        printf("\n List is empty");

    struct node *ptr=NULL;
    ptr=head;
    while (ptr!=NULL)
    {
        printf("%d \t",ptr->data);
        cnt++;
        ptr=ptr->next;
    }
}
void insert_end(struct node **head_ref,int new_data)        
{
    struct node *ptr=*head_ref;
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->next=NULL;
    temp->data=new_data;
    if(*head_ref==NULL)
    {
        *head_ref=temp;
        return;
    }
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    return;
}
void delete_end(struct node **head)
{
    struct node *ptr=*head;
    //struct node *temp=(struct node *)malloc(sizeof(struct node));
    //temp->next=NULL;
    if(*head==NULL)
    {
        printf("\n list is empty");
        return;
    }
    if(ptr->next==NULL)
    {
        *head=NULL;
        return;
    }
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=NULL;
    return;   
}
int main()
{
    struct node *head=NULL;

    insert_end(&head,11);
    insert_end(&head,12);
    insert_end(&head,13);
    insert_end(&head,14);
    insert_end(&head,15);
    insert_end(&head,16);

    head_count(head);
    
    delete_end(&head);
    delete_end(&head);
    delete_end(&head);
    delete_end(&head);

    printf("\n\n");
    head_count(head);
    return 0;
}