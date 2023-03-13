#include<stdio.h>
struct area
{
    int length;
    int breath;
};
int main()
{
    struct area rect = {10,20};
    struct area *prect = &rect;
    printf("\nlength %d",rect.length);
    printf("\nbreath %d",rect.breath);
    printf("\narea : %d",rect.breath * rect.length);

    printf("\narea:%d",prect->breath * prect->length);
    printf("\n enter l & b");
    struct area *prect1;
    scanf("%d%d,&prect1->length,&prect1->breath");
    printf("\narea:%d",prect1->breath * prect1->length);
}