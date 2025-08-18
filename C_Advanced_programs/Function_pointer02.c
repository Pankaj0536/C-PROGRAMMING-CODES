// Program to Implement function pointer  
#include <stdio.h>

// Greet with sum 

int sum(int a, int b)
{
   return a + b;
}

void greenhello(int (*fptr)(int, int))
{
   printf("Hello user\n");
   printf("The sum of 5 and 6 is %d\n", fptr(5, 6));
}

void greengm(int (*fptr)(int, int))
{
   printf("good morning user\n");
   printf("The sum of 5 and 6 is %d\n", fptr(5, 6));
}

int main()
{
   int (*ptr)(int, int); // declaring a function pointer

   ptr = &sum;
   greengm(ptr);
   greenhello(ptr);

   return 0;
}