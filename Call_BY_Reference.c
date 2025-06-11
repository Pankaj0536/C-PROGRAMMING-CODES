//program to swap two number by passing address(CAll By Reference)
#include <stdio.h>

// Swapping function
void swap(int *a, int *b) // parameters are pointer will points to the address of a and b
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
  return;
}
int main()
{
  int a = 13, b = 5;
  printf("Before swapping : \n");
  printf("The value of a and b are %d and %d respectively \n", a, b);
  swap(&a, &b); // passed address of a and b
  printf("After  swapping : \n");
  printf("The value of a and b are %d and %d respectively \n", a, b);
  return 0;
}