// Program to implement use of continue statement inside loop
#include <stdio.h>
int main()
{

  int i;
  for (i = 0; i < 10; i++)
  {
    printf("%d\n", i);
    if (i >= 5)
      continue;
    printf("hello guru kaise ho aap ji kosme\n");
  }
  return 0;
}