// 2d arrays is array of arrays
// index should be started from 0 in both row and column
// it is mendatory to give column size but  optional to provide row size
// if there are are 6 element in 2d array means if its add of a[0][0]is 100 then add of a[1][2] is 120 here 120 is starting add of a[1][2]and ending at 124.
// there are two for loop would be required for 2d array  i.e, for i & j
// m= no. of rows
// n= no. of column
// formula to get address in row implementation is    :  a[i][j] =  base_add + {(i*n)+j}*size
// if index started from 1  formula  address in row implementation is    :  base_add + {((i-1)*n)+(j-1)}*size


// (no.of column crossed)*{(no. of elements in each column)+(how many crossed to get desired)}*size of datatype


#include <stdio.h>
int main()
{
    /* methods for initiliing at compile time*/
    //  int a[2][3]={1,2,3,4,5,6};
    // int a[2][3]={{1,2,3},{4,5,6}};   2nd way to initilize 2d array

    /* methods for initiliing at run  time*/
    int a[2][3];
    printf("Enter the elements of arrays  a[2][3] \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    printf("Required 2-D arrays is: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}