#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *tail, *head, *newnode, *temp;

int main()
{
    int n;
    printf("Enter the total no. of nodes: \t");
    scanf("%d", &n);
    head = 0;
    tail = head;
    for (int i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = 0;
        newnode->prev = 0;
        printf("Enter data: \t");
        scanf("%d", &newnode->data);
        if (head == 0)
        {
            head = tail = newnode;
            head->next = head;
            head->prev = head;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            newnode->next = head; /* for circular linked  newnode to head */
            head->prev = newnode; /* for circular linked  head to newnode */
            tail = newnode;
        }
    }
    printf("\n");
    printf("Doubly circular linked list are :\t");
    temp = head;
    while (temp != tail)
    {
        printf("%d \t", temp->data);
        temp = temp->next;
    }
    printf("%d \t", temp->data);

    // insertion
    printf("\n");
    temp = head;
    int position, j = 1;
    printf("Enter the position :\t");
    scanf("%d", &position);
    if (position < 0 || position > n)
    {
        printf("Invalid position ");
    }
    else
    {

        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter new data :\t");
        scanf("%d", &newnode->data);
        while (j < position - 1)
        {
            temp = temp->next;
            j++;
        }

        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next->prev = newnode; /**************/
        temp->next = newnode;
    }

    // displaying
    printf("\n");
    printf("After insertion Doubly circular linked list are :\t");
    temp = head;
    while (temp != tail)
    {
        printf("%d \t", temp->data);
        temp = temp->next;
    }
    printf("%d \t", temp->data);
}