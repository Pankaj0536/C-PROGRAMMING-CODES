// program to swap two number without using third variable
#include <stdio.h>

void swap(int *a, int *b) // a = 90 , b = 78
{
    *a = *a + *b; // a = 168
    *b = *a - *b; // b = 168 - 78 = 90
    *a = *a - *b; // a = 168 - 90 = 78
    return;
}
int main()
{
    int a, b;

    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);

    printf("Before Swaping \na = %d | b = %d", a, b);

    swap(&a, &b);

    printf("\nAfter Swaping \na = %d | b = %d", a, b);
    return 0;
}