/*
Write a program to print this pattern

1
0 1
1 0 1
0 1 0 1

*/
#include <stdio.h>

int main()
{
    int rows, count = 1;

    printf("Enter number of rows : ");
    scanf(" %d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        int p = 1;
        if (i % 2 == 0)
            p = 1;
        else
            p = 0;
        for (int j = 1; j <= i; j++)
        {

            printf(" %d ", p);
            if (p == 0)
                p = 1;
            else
                p = 0;
        }
        printf("\n");
    }

    return 0;
}
