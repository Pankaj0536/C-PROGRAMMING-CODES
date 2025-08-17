// Program to find factorial of an number using Recurtion
#include <stdio.h>

int fact(int n)
{
  if (n==1 || n==0)//base case
  {
      return 1;
  }
  //FACTORIAL OF
  //  5 =  1 X 2 X 3 X 4 X 5
  //  4 =  1 X 2 X 3 X 4
  //  3 =  1 X 2 X 3
  //  n =  1 X 2 X 3 X 4 X 5 X...........X n kya me factorial of n ko factorial of n-1 * n nahi bol skta kya bol sakta hu 
  //  fact(n) = fact( n-1 ) X n
  //  n-1 =  1 X 2 X 3 X 4 X 5 X........X n-1 
  return fact(n-1)*n;//jab factorial of 2 aayega toh fact( n-1 ) fact(1) ho jaaega 
  // aur baad me fact(1) fact(0) ho jaaega aur waise hi -1,-2 aur aage bhi jaega isko
  //  1 tak rokne ke liye aik base case hota hai   
}
int main()
{
  int factorial;

  printf("Enter the number which you want to find the factorial \n");
  scanf("%d",&factorial);

  printf("The factorial of %d is %d\n",factorial,fact(factorial));
  return 0;
}