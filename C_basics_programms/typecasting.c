#include <stdio.h>
// program to implement typecasting between integar and float numbers
int main()
{

  int a = 10, c = 45;
  float b = (float)10 / 45;

  printf("The value of a without typecast is %d \n", a);
  printf("The value of a with type cast in float is %f\n", (float)a);
  printf("Without typecast the value of 10/45 = %d\n", 10 / 45);
  printf("With typecast the value of 10/45 = %f\n", b);

  return 0;
}
