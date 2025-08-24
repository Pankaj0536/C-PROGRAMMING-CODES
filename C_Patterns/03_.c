/*


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

    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j <= rows; j++)
        {
           printf("*   ");
        }
        printf("\n");
        
    }
    

    return 0;
}