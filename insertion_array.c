#include <stdio.h>
int main()
{
    int a[50], size, position, num;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    printf("Enter the Elements array \n");

    //    here i is index of array
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    printf("Enter the position at which new elements to be inserted :  ");
    scanf("%d", &position);

    if (position > size || position <= 0)
    {
        printf("Invalis Position");
    }
    else
    {
        printf("Enter the number to be inserted : ");
        scanf("%d", &num);

        for (int i = size - 1; i >= (position - 1); i--)
        {
            a[i + 1] = a[i];
        }
        a[position - 1] = num;
        size++;
        
        printf("New array is:  ");
        for (int i = 0; i < size; i++)
        {
            printf("%d\t", a[i]);
        }
    }
    // return 0;
}