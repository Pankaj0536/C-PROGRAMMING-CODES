/*
      D D D D
      C C C
      B B
      A

*/
#include <stdio.h>

int main()
{
    int k;
    for (char i = 'D'; i >= 'A'; i--)
    {
        for (char j = 'A' ; j <= i;j++)
        {

            printf(" %c ", i);
        }

        printf("\n");
    }

    return 0;
}