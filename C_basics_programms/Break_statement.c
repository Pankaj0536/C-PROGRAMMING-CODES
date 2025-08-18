// program to implement break statement

#include <stdio.h>

int main()
{
    int i = 0;

    while (1)
    {
        printf("%d ",i);
        if (i == 10)
            break;
        i++;
    }
    return 0;
}