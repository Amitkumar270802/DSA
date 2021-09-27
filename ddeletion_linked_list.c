
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *newnode, *temp;
int n;
int count = 0;

void deletion_from_begning()
{
    struct node *temp;
    printf("\n");
    temp = head;
    head = head->next;
    free(temp);
}

int main()
{
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
    printf("Linked list are : \t");
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\ncount is %d : ", count);

    deletion_from_begning();

    temp = head;
    count = 0;
    printf("New Linked list are :\t ");
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\ncount is %d : ", count);
}
