#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *temp, *head, *newnode, *tempnext;

int main()
{
    int n;
    head = 0;
    temp = 0;
    printf("Enter the total no of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: \t");
        scanf("%d", &newnode->data);
        newnode->prev = 0;
        newnode->next = 0;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = temp->next;
        }
    }

    printf("\n");
    printf("Linked list: \t");
    temp = head;
    while (temp != 0)
    {
        printf("%d \t", temp->data);
        temp = temp->next;
    }

    temp = head;
    int position, i = 1;
    printf("\n");
    printf("Enter the posiiton : ");
    scanf("%d", &position);
    if (position <= 0 || position > n)
    {
        printf("Invalid Position ");
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);

        tempnext = temp;
        while (i < position )
        {
            temp = temp->next;
            i++;
        }
        tempnext = temp->next;
        newnode->prev = temp;
        newnode->next = tempnext;
        tempnext->prev = newnode;
        temp->next = newnode;

        printf("\n");
        printf("New linked list: \t");
        temp = head;
        while (temp != 0)
        {
            printf("%d \t", temp->data);
            temp = temp->next;
        }
    }
}