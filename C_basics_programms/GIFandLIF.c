#include <stdio.h>
#include <math.h>
// NOTE:
// FOR GREATEST = use ceil
// FOR LOWEST = use floor
// PROGRAM TO FIND THE LOWEST INTEGER VALUE
int main()
{
  float a, b, c, d;
  a = 4.56;
  b = 34.9;
  c = -3.14;
  d = -2.99;

  printf("The LOWEST INTEGER value of a is %lf\n", ceil(a));
  printf("The LOWEST INTEGER value of b is %lf\n", ceil(b));
  printf("The LOWEST INTEGER value of c is %lf\n", ceil(c));
  printf("The LOWEST INTEGER value of d is %lf\n", ceil(d));
  printf("\n");
  // PROGRAM TO FIND GREATEST INTEGER VALUE
  printf("The GREATEST INTEGER value of a is %lf\n", floor(a));
  printf("The GREATEST INTEGER value of b is %lf\n", floor(b));
  printf("The GREATEST INTEGER value of c is %lf\n", floor(c));
  printf("The GREATEST INTEGER value of d is %lf\n", floor(d));
  return 0;
}