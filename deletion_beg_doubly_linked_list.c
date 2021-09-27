#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head, *temp, *newnode;
int main()
{
    int n;
    printf("Enter the total no.of nodes : ");
    scanf("%d", &n);
    head = 0;
    for (int i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data : ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        newnode->prev = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            newnode->prev = temp;
            temp->next = newnode;
            temp = temp->next;
        }
    }
    printf("\n");
    printf("New linked list: \t");
    temp = head;
    while (temp != 0)
    {
        printf("%d \t", temp->data);
        temp = temp->next;
    }


    printf("\n");
    temp=head;
    head=temp->next;
    free(temp);
    printf("\n");

    
    printf("After deletion at beginning  linked list: \t");
    temp = head;
    while (temp != 0)
    {
        printf("%d \t", temp->data);
        temp = temp->next;
    }
}