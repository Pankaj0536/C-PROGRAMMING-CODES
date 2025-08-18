// program to check whether the year is leap year or not 
#include <stdio.h>

int main()
{
  int year;

  printf("Enter the year\n");
  scanf("%d", &year);

  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
  {
    printf("the year %d is a leap year\n", year);
  }

  else
  {
    printf("the year %d is not a leap year\n", year);
  }

  return 0;
}