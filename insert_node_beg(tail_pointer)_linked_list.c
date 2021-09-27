// circular  linked list using maintining tail pointer

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *newnode, *head, *tail;
int main()
{
    int n;
    printf("Enter the total no. of node : \t");
    scanf("%d", &n);
    head=tail=0;
    for (int i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = 0;
        printf("Enter the data : \t");
        scanf("%d", &newnode->data);

        if (head == 0)
        {
            head= tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        tail->next=head; 


    // display circular linked list
    printf("\n");
    printf("Circular linked list are :\t");
    while (temp->next != head)
    {
        printf("%d \t", temp->data);
    }
    printf("%d", temp->data);

    //    insert new node at beginning
    printf("\n");
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data : \t");
    scanf("%d", &newnode->data);
    while (temp->next != head)
    {
    }
    head = newnode;
    temp->next = head;

    // printing after insertion
    printf("\n");
    printf("Circular linked list are : \t");
    while (temp->next != head)
    {
        printf("%d \t", temp->data);
    }
    printf("%d", temp->data);
}