// program to implement multiplication of two matrix
#include <stdio.h>

int arr1[10][10], arr2[10][10] , arr3[10][10];

void create_array(int *temp, int rows, int cols)
{
  if (rows == 0 || cols == 0)
  {
    printf("Error :: Invalid size of the array\n");
    return;
  }

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      printf("Enter the value at position %d %d\n", i, j);
      scanf("%d", (temp + i * cols + j));
    }
  }
  printf("\n");
}

void display(int *ptr, int rows, int cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      printf("%d ", *(ptr + i * cols + j));
    }
    printf("\n");
  }
  printf("\n");
}

void multiply_array(int r1,int c1,int r2,int c2)
{
  if(c1 != r2)
  {
    printf("Error :: Invalid matrix \n");
    return;
  }
  for (int i = 0; i < c1; i++)
  {
      for(int j = 0 ; j < c2; j++)
      {
        arr3[i][j] = 0;
        for(int k = 0 ; k < r2 ; k++)
        {
          arr3[i][j] += arr1[i][k] * arr2[k][j];
        }
      }
  }
  

}
int main()
{
  int r1, c1;
  int r2, c2;
  printf("For matrix 1 : \n");
  printf("Enter numbers of rows and columns : \n");
  scanf("%d %d", &r1, &c1);

  create_array(&arr1[0][0], r1, c1);

  printf("For matrix 2 : \n");
  printf("Enter numbers of rows and columns : \n");
  scanf("%d %d", &r2, &c2);

  create_array(&arr2[0][0], r2, c2);

  printf("Mat-1\n");
  display(&arr1[0][0], r1, c1);

  printf("Mat-2\n");
  display(&arr2[0][0], r2, c2);
  
  printf("multiplicated matrix is \n");
  display(&arr3[0][0], c1, r2);
  return 0;
}
