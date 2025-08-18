//  rock,paper,scissor game
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void choice(int a); // choice prototype
int random(int p);  // random prototype
char temp[20];      // initilizing string

int random(int p)
{
   return rand() % p;
}
void choice(int n)
{
   switch (n)
   {
   case 0:
      strcpy(temp, "PAPER");
      break;

   case 1:
      strcpy(temp, "ROCK");
      break;

   case 2:
      strcpy(temp, "SCISSOR");
      break;

   default:
      strcpy(temp, "Invalid choice");
      break;
   }
}

int main()
{
   srand(time(0));

   int comp_choice, plyr_choice;
   int compscore = 0, plyrscore = 0;
   char name[10];

   printf("WELCOME TO ROCK,PAPER,SCISSOR\n");
   printf("Enter your name \n");
   scanf("%s", &name);

   while (1)
   {
      printf("Enter 0 to choose paper\nEnter 1 to choose Rock\nEnter 2 to choose scissor\n");
      scanf("%d", &plyr_choice);

      choice(plyr_choice);

      printf("You choose %s\n", temp);

      comp_choice = random(3); // generating a random number and storing it in comp -choice
      choice(comp_choice);     // calling function choice
      printf("Computer choose %s \n", temp);

      if (plyr_choice == 0 && comp_choice == 2)
      {
         printf("COMPUTER got it!!\n");
         compscore += 1;
      }

      if (plyr_choice == 1 && comp_choice == 2)
      {
         printf("%s got it!!\n", name);
         plyrscore += 1;
      }

      if (plyr_choice == 2 && comp_choice == 2)
      {
         printf("It's Draw\n");
      }

      if (plyr_choice == 1 && comp_choice == 1)
      {
         printf("It's Draw\n");
      }

      if (plyr_choice == 0 && comp_choice == 0)
      {
         printf("It's Draw\n");
      }

      if (plyr_choice == 2 && comp_choice == 1)
      {
         printf("COMPUtER got it!!\n");
         compscore += 1;
      }

      if (plyr_choice == 2 && comp_choice == 0)
      {
         printf("%s got it!!\n", name);
         plyrscore += 1;
      }

      if (plyr_choice == 1 && comp_choice == 0)
      {
         printf("COMPUTER got it!!\n");
         compscore += 1;
      }

      if (plyr_choice == 0 && comp_choice == 1)
      {
         printf("%s got it!!\n", name);
         plyrscore += 1;
      }
      printf("%s score = %d , ", name, plyrscore);
      printf("Computer score = %d\n", compscore);

      if (compscore == 3 || plyrscore == 3)
      {
         break;
      }
   }
   
   if (compscore == 3)
   {
      printf("Computer won by %d points\n", compscore - plyrscore);
   }

   else
   {
      printf("%s won by %d points\n", name, compscore - plyrscore);
   }

   printf("***********Game ends***********\n");

   return 0;
}