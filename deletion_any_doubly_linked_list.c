
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head, *temp, *newnode, *tempprev;
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
    int position, j = 1;
    temp = head;
    printf("Enter the position :\t ");
    scanf("%d", &position);

    if (position <= 0 || position > n)
    {
        printf("Position Invalid");
    }

    // deletion at beginning
    else if (position == 1)
    {
        printf("\n");
        temp = head;
        head = temp->next;
        free(temp);
        printf("\n");
    }

    // deletion at end
    else if (position == 5)
    {
        printf("\n");

        temp = head;
        tempprev = temp;
        while (temp->next != 0)
        {
            tempprev = temp;
            temp = temp->next;
        }
        tempprev->next = 0;
        temp->prev = 0;
        free(temp);
        printf("\n");
    }


    //    deletion from any position except beginning and end
    else
    {
        while (j < position)
        {
            temp = temp->next;
            j++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }

    //   printing after deletion
    printf("After deletion at any position  linked list: \t");
    tempprev = head;
    while (tempprev != 0)
    {
        printf("%d \t", tempprev->data);
        tempprev = tempprev->next;
    }
    printf("\n");
}