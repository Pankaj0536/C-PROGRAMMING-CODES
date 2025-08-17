// program to Display Ascii values
#include <stdio.h>
int main()

{
    
   printf("This is ASCCI value table :\n");
   for (int i = 0; i <= 255; i++)
   {
      printf("%d -> %c |",i,i);
      if(i % 2 == 0)
         printf("\n");
   }
   
}