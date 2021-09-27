
#include <stdio.h>
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
    printf("if you want to  insert new node at beginning press 1 else 0 : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d", &newnode->data);
        newnode->next = head;
        head = newnode;

        temp = head;
        printf("New Linked list are : \t ");
        while (temp != 0)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
    else{
        printf("Invalid choice ");
    }
}