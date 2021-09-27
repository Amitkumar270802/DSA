/*
malloc(sizeof(struct node))  made a block  dynamically of given size  and returns address of first block to the poiner (here newnode)
(struct node *)  malloc itself is of void type due to this we have to typecasting first

*/

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
        // creation of node and retun the address of node
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = 0;       

        // data of newnode
        printf("Enter Data : ");
        scanf("%d", &newnode->data);


        // linking of nodes
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
    printf("Linked list are : ");
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}