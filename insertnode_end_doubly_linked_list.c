#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *temp, *head, *newnode;

int main()
{
    int n;
    head=0;
    temp=0;
    printf("Enter the total no of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));       
        printf("Enter data: \t");
        scanf("%d", &newnode->data);
        newnode->prev = 0;
        newnode->next = 0;

        if (head == 0)
        {
            head =temp= newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = temp->next;
        }
    }

    printf("\n");
    printf("Linked list: \t");
    temp = head;
    while (temp != 0)
    {
        printf("%d \t", temp->data);
        temp = temp->next;
    }
    
    temp=head;
    printf("\n");
    printf("Insertion of a new node at End position ");
    newnode = (struct node *)malloc(sizeof(struct node));  
    printf("Enter data: ");
    scanf("%d",&newnode->data);     
 
   while (temp->next!=0)
   {
       temp=temp->next;
   }
   temp->next=newnode;
   newnode->next=0;
   newnode->prev=temp;

   
    printf("\n");
    printf("New linked list: \t");
    temp = head;
    while (temp != 0)
    {
        printf("%d \t", temp->data);
        temp = temp->next;
    }


}