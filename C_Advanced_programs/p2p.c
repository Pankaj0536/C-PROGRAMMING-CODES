// Program to implement pointer to pointer type 
#include <stdio.h>
int main()
{
    int i = 5;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;

    printf("The address of i is %u\n", ptr1);
    printf("The value at i is %d\n", *ptr1);
    printf("The value at i is %d\n", **ptr2);
    printf("The address of ptr1 is %u\n", ptr2);
    
    return 0;
}