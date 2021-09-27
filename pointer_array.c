//  int *p    means  pointer to integer  i.e, this pointer is not of integer type actually the value at that address is of integer type
//  char *c   means  pointer to characters  : c stores a address of variables & the datatype of vriables is char
//  float *f  means  pointer to float
//  %p specifier is used to print the pointer
//  pointer is used to store the address of another variables not the value
//  * is known as dereferencing operator
//  pointer is hexadecimal type of 8 bytes
//  array name itself as a pointer
//  base address cannot be changed

#include <stdio.h>
int main()
{

    /*
    int a=10;
    int *p;
    p=a;        //this is invalid 
    */

    int a[5] = {1, 2, 3, 4, 5};
    int *p;
    p = a; // array name itself a array
           // p=&a[2];     this is correct
           // p=&a;        this is  incorrect because array itself as pointer
           // p=a[2];      this is not allowed as p is pointer it contains add not value

    // a[i]=*(a+i)
    // a[i]=*(p+i)
    // *(i+a) = a[i] = *(p+i) = p[i]

    // a        base address
    // &a       base address
    // p        base address
    // &a+i     address of a[i]
    // &(a)+i   address of a[i]
    // &a + 1  =  &(a)+1        address  of a[last + 1 element]
    // &p + i  =  &(p) + i      address of a[i]

    //  a[i]                    value of ith index element
    //  p[i]                    value of ith index element
    // *(a+i) = *(a)+i = *a+i   value of ith index element
    // *(p+i) = *(p)+i = *p+i   value of ith index element

    //  &(a + 1) error
    //  &(p + 1) error
    //  *p[i] error


    printf("\n");
    printf("Base address : %p \n", p);
    printf("Base address : %p \n", a);
    printf("Base address : %p \n", &a);

    printf("\n");
    printf("Value at a[0] : %d \n", *p);
    printf("Value at a[0] : %d \n", *a);

    printf("\n");
    printf("Value at a[1] : %d \n", a[1]);
    printf("Value at a[1] : %d \n", *a + 1);
    printf("Value at a[1] : %d \n", *(a + 1));
    printf("Value at a[1] : %d \n", *(a) + 1);

    printf("Value at a[1] : %d \n", p[1]);
    printf("Value at a[1] : %d \n", *p + 1);
    printf("Value at a[1] : %d \n", *(p + 1));
    printf("Value at a[1] : %d \n", *(p) + 1);


    printf("\n");
    printf("Address at a[1] : %p \n", &p + 1);
    printf("Address at a[1] : %p \n", &(p) + 1);
    printf("\n");
    printf("Address at a[1] : %d \n", &p + 1);
    printf("Address at a[1] : %d \n", &(p) + 1);

    printf("\n");
    printf("Address at a[5]  it is noy in array  : %d \n", &a + 1);
    printf("Address at a[5]  it is noy in array  : %d \n", &(a) + 1);
  
    printf("\n");
    printf("Address of a[4] : %d \n", &a[4]);
    printf("value of a[4] : %d \n", p[4]);
    printf("value of a[4] : %d \n", a[4]);

/*
    printf("\n");
    printf("Address of a[1] : %d \n", p);
    printf("Address of a[2] : %d \n", p + 1);
    printf("Address of a[3] : %d \n", p + 2);
    printf("Address of a[4] : %d \n", p + 3);
    printf("Address of a[5] : %d \n", p + 4);
*/

}
