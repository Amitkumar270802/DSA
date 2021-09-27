
#include <stdio.h>
int n;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head, *newnode, *temp;     /*temp is used for traversing*/
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
    int count = 0;
    temp = head;
    printf("Linked list are :\t  ");
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\n");

    printf("Total no. of nodes are : %d", count);
    printf("\n");

    int position, i = 1;
    printf("\nEnter the position at which new node is inserted: ");
    scanf("%d", &position);

    if (position > count)
    {
        printf("Invalid position ");
    }
    else
    {
        temp = head;
        while (i < position)
        {
            temp = temp->next;
            i++;
        }
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data :  ");
        scanf("%d", &newnode->data);
        newnode->next = temp->next;
        temp->next = newnode;

        // printing  New linked list
        temp = head;
        printf("\nNew Linked list are : \t ");
        while (temp != 0)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }

    printf("\n");
}