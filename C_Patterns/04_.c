/*

*
*   *
*   *   *
*   *   *   *
*   *   *
*   *
*

*/

#include <stdio.h>

int main()
{
    int rows;
    printf("Enter number of rows:\n");
    scanf("%d", &rows);

    for (int k = 1; k <= rows; k++)
    {
        for (int l = 1; l <= k; l++)
        {
            printf("*   ");
        }
        printf("\n");
    }

      for (int i = 1; i < rows; i++)
    {
        for (int j = i; j < rows; j++)
        {
            printf("*   ");
        }
        printf("\n");
    }
    
    return 0;
}