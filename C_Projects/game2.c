// guessing the random number

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randomnumber(int a)
{
  srand(time(0));
  int randomnumber = (rand() % a) + 1;
  return randomnumber;
}
int main()
{
  int randomno, temp, guess, try = 0, corr;
  printf("Enter the value til you want to guess any random number\n");
  scanf("%d", &randomno);
 
  temp = randomnumber(randomno);
  printf("You have 3 chances to guess random number\n");
  for (int i = 0; i < 3; i++)
  {
    printf("guess that random number \n");
    scanf("%d", &guess);
    if (guess < temp)
    {
      printf("Greater number please!!\n");
      try += 1;
      corr = 0;
    }
    else if (guess > temp)
    {
      printf("Smaller number please!!\n");
      try += 1;
      corr = 0;
    }
    else
    {
      printf("That's correct guessing\n");
      try += 1;
      corr = 1;
      break;
    }
  }
  printf("*******************************Result*******************************\n");
  printf("The random number was %d\n", temp);
  if (corr == 1)
  {
    if (try == 1)
    {
      printf("Excellent !! you guess right random number in your 1st attempt \n");
    }
    else if (try == 2)
    {
      printf("very good !! you guess right random number in your 2st attempt \n");
    }
    else
    {
      printf("good !! you guess right random number in your 3rd and last attempt \n");
    }
  }
  else
  {
    printf("Sorry!! your chances are over\n");
  }
  return 0;
}