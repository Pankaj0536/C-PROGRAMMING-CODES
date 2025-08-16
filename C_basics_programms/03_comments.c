    //  hello '//' this is notation of single line comment

    /* these comments are not going to be executed..
  a = 90
  b = 40
  c = ?
  c = a + b - a * b / a
  */
#include <stdio.h>//header file 

int main()
{

    int a, b, c;
    a = 90;                // assigning value of a to be 6(use of single line comment)
    b = 40;                // assigning value of b to be 6
    c = a + b - a * b / a; // c = 90
    printf("the value of c is %d \n", c);

    return 0;
}