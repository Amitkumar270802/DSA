
#include <stdio.h>
int main()
{
    int a[2][3];
    printf("Enter the elements of arrays  a[2][3] \n");

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 2; i++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    printf("Required 2-D arrays is: \n");

    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}