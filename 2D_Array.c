// Program to implement 2D array 
#include <stdio.h>
int main()
{
  int arr[2][3];//matrix of 2 rows and 3 column 

  for (int  i = 0; i < 2; i++)
  {
   for (int  j = 0; j < 3; j++)
   {
    printf("Enter the value at position %d,%d\n",i,j);
   scanf("%d",&arr[i][j]);
   }
  }
  for (int  i = 0; i < 2; i++)
  {
   for (int  j = 0; j < 3; j++)
   {
    printf("%d",arr[i][j]);
   }
   printf("\n");
  }
  return 0;
}
