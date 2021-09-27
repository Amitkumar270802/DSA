// circular  linked list without maintining tail pointer

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *newnode, *head, *temp;
int main()
{
    int n;
    printf("Enter the total no. of node : \t");
    scanf("%d", &n);
    head = temp = 0;
    for (int i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = 0;
        printf("Enter the data : \t");
        scanf("%d", &newnode->data);

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = temp->next;
        }
        temp = head;
        while (temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next = head;
    }

    // display circular linked list
    printf("\n");
    temp = head;
    printf("Circular linked list are :\t");
    while (temp->next != head)
    {
        printf("%d \t", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);

    //    insert new node at beginning
    printf("\n");
    temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data : \t");
    scanf("%d", &newnode->data);
    newnode->next = temp;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    head = newnode;
    temp->next = head;


    // printing after insertion
    printf("\n");
    temp = head;
    printf("Circular linked list are : \t");
    while (temp->next != head)
    {
        printf("%d \t", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);
}