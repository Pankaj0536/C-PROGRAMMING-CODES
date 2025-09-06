/*
 0
 0  1
 0  0  0
 0  1  0  1


*/

#include <stdio.h>

int main()
{
    int rows, p, count = 1;

    printf("Enter number of rows : ");
    scanf(" %d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (count % 2 == 0)
                p = 1;
            else
                p = 0;
                count ++;
                printf(" %d ",p);
        }
        printf("\n");
    }

    return 0;
}