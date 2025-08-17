//implementation of an array

#include <stdio.h>
 
int main()
{
    int array[5];

    // assigning value to array
    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    array[3] = 40;
    array[4] = 50;

    printf("\nArray is : ");
    for (int  i = 0; i < 5; i++)
    {
        printf("%d ",array[i]);
    }
    
    return 0;
}