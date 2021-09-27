#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *temp, *newnode, *head;
int main()
{
    int n, data;
    printf("Enter total no. of nodes :\t");
    scanf("%d", &n);
    head = 0;
    for (int i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data : \t");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = temp->next;
        }
    }
        temp->next = head;

    temp = head;
    printf("circular linked list are : \t");
    while (temp->next!= head)          /*condition for circular list */
    {
        printf("%d \t", temp->data);
        temp = temp->next;
    }
        printf("%d\t", temp->data);        /*for printing the last node*/
}
