// Program to implement use of continue statement inside loop
/* continue keyword is used within a loop to skip any certain step
eg: if we are trying to print 0 to 4 using any loop
then if we use continue when num = 3 ,
then simply compiler will skip the print statement when num = 3
output : 0 , 1 ,2 ,4 (3 is skipped )  */
#include <stdio.h>
int main()
{
  int i = 0;

  printf("printing integars : ");
  while (i <= 4)
  {

    if (i == 3)
    {
      i++;
      continue;
    }
    printf("\n%d", i++);
  }
  return 0;
}