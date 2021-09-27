
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head, *newnode, *temp, *prevtemp;

void display_linkedlist()
{
    temp = head;
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

void deletion_from_end()
{
    temp = head;
    printf("\n");
    while (temp->next != 0)
    {
        prevtemp = temp;
        temp = temp->next;
    }
    prevtemp->next = 0;
    free(temp);
}

int main()
{
    int n;
    int count = 0;
    head = 0;
    printf("Enter  total no. of node : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = 0;
        printf("Enter Data : ");
        scanf("%d", &newnode->data);
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    // for printing linked lists
    printf("Linked list before deletion are : \t");
    display_linkedlist();
    deletion_from_end();
    printf("Linked list after deletion are : \t");
    display_linkedlist();
    printf("\n");
}
