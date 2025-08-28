/* 
    4  3  2  1
    4  3  2
    4  3 
    4

*/
#include <stdio.h>
 
int main()
{
    int rows;

    printf("Enter the numberof rows :");
    scanf("%d",&rows);

    for (int i = 1; i <= rows ; i++)
    {
        for (int j = rows; j >= i; j--)
        {
           printf(" %d ",j);
        }
        printf("\n");
    }
    
    return 0;
}