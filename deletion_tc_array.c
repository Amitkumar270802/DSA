// for keeping time complexities in mind we can shift  the last element at the position of deletion taken instead of shifting all elements
// thsi concept will apply if array is not sorted

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a[50], size, position, num;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    printf("Enter the Elements array \n");

    // i represent index of arrays

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

    if (position <= 0 || position > size)
    {
        printf("Invalid Position  ");
    }
    else
    {
        a[position - 1] = a[size - 1];

        for (int i = 0; i < size - 1; i++)
        {
            printf("%d\t", a[i]);
        }
    }

    return 0;
}