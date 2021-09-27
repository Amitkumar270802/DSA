
#include <stdio.h>
#include<stdlib.h>
int n;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head, *newnode, *temp;
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
    temp = head;
    printf("Linked list are :\t  ");
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
    int choice;
    printf("\nif you want to  insert new node at end press 1 else 0 : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data :  ");
        scanf("%d", &newnode->data);
        newnode->next=0;
        temp = head; 
        while (temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next = newnode;

        temp = head;
        printf("\nNew Linked list are : \t ");
        while (temp != 0)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
    else
    {
        printf("Invalid choice ");
    }
        printf("\n");
}