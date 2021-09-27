#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head, *newnode, *temp, *nextnode; //here all are pointer

int n;
void deletion_from_position()
{
    struct node *nextnode, *temp;
    int position, i = 1;
    temp = head;
    printf("Enter the position : ");
    scanf("%d", &position);

    if (position <= 0 || position > n)
    {
        printf("Position Invalid");
    }
    else
    {
        while (i < position - 1)
        {
            temp = temp->next;
            i++;
        }
        nextnode = temp->next;
        temp->next = nextnode->next;
        free(nextnode);
    }
}

void print_linklist()
{
    temp = head;
    printf("Linked list are : \t");
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
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

    print_linklist();
    deletion_from_position();
    print_linklist();
    printf("\n");
}
