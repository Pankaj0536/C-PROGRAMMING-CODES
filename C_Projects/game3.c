#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
// random function prototype
int random(int n);
// choice function prototype
void choice(int n);
char string[10]; // Initilizing global variable to use string
int random(int n)
{
  return rand() % n;
}
void choice(int n)
{
  switch (n)
  {
  case 0:
    strcpy(string, "water");
    break;
  case 1:
    strcpy(string, "snake");
    break;
  case 2:
    strcpy(string, "gun");
    break;
  default:
    strcpy(string, "Invalid choice"); // for invalid entry
    break;
  }
}
int main()
/*
0 -> snake
1 -> water
2 - gun*/
{
  srand(time(0));

  int player = 0, computer = 0, player_choice, comp_choice;

  printf("********************GAME RULE********************:\n");
  printf("choose :\n");
  printf("0 -> snake\n");
  printf("1 -> water\n");
  printf("2 -> gun\n");
  printf("\n");

  while (1)
  {
    printf("Enter your choice\n");
    scanf("%d", &player_choice);
    if (player_choice < 0 || player_choice > 2)
    {
      printf("!!!Invalid choice\n");
      continue;
    }
    choice(player_choice);
    printf("Your choice is -> %s <-\n", string);
    comp_choice = random(3);
    choice(comp_choice);
    printf("The choice of computer is -> %s <-\n", string);
    if (player_choice == 0)
    {
      if (comp_choice == 0)
      {
        printf("It's draw\n");
      }
      else if (comp_choice == 1)
      {
        printf("it's computer\n");
        computer += 1;
      }
      else if (comp_choice == 2)
      {
        printf("it's player\n");
        player += 1;
      }
    }
    else if (player_choice == 1)
    {
      if (comp_choice == 0)
      {
        printf("it's player\n");
        player += 1;
      }
      else if (comp_choice == 1)
      {
        printf("It's draw\n");
      }
      else if (comp_choice == 2)
      {
        printf("it's computer\n");
        computer += 1;
      }
    }
    else if (player_choice == 2)
    {
      if (comp_choice == 0)
      {
        printf("it's computer\n");
        computer += 1;
      }
      else if (comp_choice == 1)
      {
        printf("it's player\n");
        player += 1;
      }
      else if (comp_choice == 2)
      {
        printf("It's draw\n");
      }
    }
    printf("******Scoreboard******\n");
    printf("player = %d , computer = %d\n", player, computer);
    if (player == 3 || computer == 3)
    {
      break;
    }
  }
  if (player == 3)
  {
    printf("Player win by %d points\n", player - computer);
  }
  else
  {
    printf("computer win by %d points\n", computer - player);
  }
  printf("***********Game ends***********\n");
  return 0;
}