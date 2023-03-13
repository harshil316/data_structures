#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void head_count(struct node *Head)
{
    int cnt = 0;
    if (Head == NULL)
        printf("\n List is empty");

    struct node *ptr = NULL;
    ptr = Head;
    while (ptr != NULL)
    {
        printf("\n %d", ptr->data);
        cnt++;
        ptr = ptr->next;
    }
    printf("\n count : %d", cnt);
}
void insert_first(struct node **Head, int n_data)
{
    // struct node *temp= *head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->next = *Head;
    temp->data = n_data;
    // printf("\nptr  %d ",temp->data);
    *Head = temp;
}
void insert_end(struct node **Head_ref, int new_data)
{
    struct node *ptr = *Head_ref;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->next = NULL;
    temp->data = new_data;
    if (*Head_ref == NULL)
    {
        *Head_ref = temp;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return;
}
void delete_first(struct node **Head)
{
    struct node *ptr = *Head;
    *Head = ptr->next;
    ptr = NULL;
}
void delete_end(struct node **Head)
{
    struct node *ptr = *Head;
    // struct node *temp=(struct node *)malloc(sizeof(struct node));
    // temp->next=NULL;
    if (*Head == NULL)
    {
        printf("\n list is empty");
        return;
    }
    if (ptr->next == NULL)
    {
        *Head = NULL;
        return;
    }
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = NULL;
    return;
}
void middle_delete(struct node ** head_ref,int key)
{
    struct node *temp = *head_ref , *prev;
    if(temp != NULL && temp->data ==key)
    {
        *head_ref =temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next; 
    }
    if(temp == NULL)
    return ;

    prev->next = temp->next;
    free(temp);
}
int main()
{
    struct node *Head = NULL;
    int ch, n_data, new_data;
    do
    {
        printf("\n press --> 1 for insert_first");
        printf("\n press --> 2 for insert_end");
        printf("\n press --> 3 for delete_first");
        printf("\n press --> 4 for delete_end");
        printf("\n press --> 5 for show head_count");
        printf("\n press -->6 middle delete");
        printf("\n press --> 0 for EXIT.");
        printf("\nEnter choice  : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n Enter value : ");
            scanf("%d", &n_data);
            insert_first(&Head, n_data);
            break;
        case 2:
            printf("\n enter last value :");
            scanf("%d", &new_data);
            insert_end(&Head, new_data);
            break;
        case 3:
            delete_first(&Head);
            break;
        case 4:
            delete_end(&Head);
            break;
        case 5:
            head_count(Head);
            break;
        case 6:
            printf("\nmiddle delete :");
            scanf("%d",&n_data);
            middle_delete(&Head,n_data);
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("\n wrong choice");
            break;
        }
    } while (ch != 0);
}