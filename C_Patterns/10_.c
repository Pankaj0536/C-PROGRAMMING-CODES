/*

       1
      2 2
     3 3 3
    4 4 4 4

*/
#include <stdio.h>

int main()
{
    int rows;

    printf("Enter number of rows:\n");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf("   ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf(" %d    ", i);
        }
        printf("\n");
    }

    return 0;
}