#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a[50], size, position, num;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    printf("Enter the Elements array \n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    printf("Enter the position at which deletion the data :  ");
    scanf("%d", &position);

    if (position<=0 || position>size)
    {
        printf("Invalid Position  ");
    }
    else{

    for (int i = position-1 ; i < (size-1); i++)
    {
        a[i] = a[i+1];
    }
    size--;
    
    printf("New array is:  ");
     for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    }
     return 0;
}