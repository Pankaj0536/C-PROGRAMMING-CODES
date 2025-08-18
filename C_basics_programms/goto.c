// program to implement goto operation

#include <stdio.h>

int main()
{

  printf("jumanji welcome to jungle\n");
  int i = 0, a;

here:
  i++;
  printf("%d\n", i);
  if (i % 4 == 0)
  {
    if (i == 12)
      goto end;

    goto display;
  }

display:
  printf("I am a Spancer\n");
  goto here;

end:
  return 0;
}