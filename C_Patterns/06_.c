/*

                *
            *   *   *
        *   *   *   *   *
    *   *   *   *   *   *   *


*/

#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows:\n");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows - i; j >= 1; j--)
        {
            printf("   ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf(" * ");
        }

        for (int l = 1; l < i; l++)
        {
            printf(" * ");
        }

        printf("\n");
    }
    return 0;
}