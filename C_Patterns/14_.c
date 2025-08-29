/* 
mirror printing of number 

    1 2 3 4 5 6
    2 3 4 5 6
    3 4 5 6
    4 5 6
    5 6
    6
    5 6
    4 5 6
    3 4 5 6
    2 3 4 5 6
    1 2 3 4 5 6
    
*/

#include <stdio.h>
 
int main()
{
    int rows;

    printf("Enter the number of rows : ");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j <= rows; j++)
        {
            printf(" %d ",j);
        }
        printf("\n");
        
    }

    for (int k = 1; k <= rows -1; k++)
    {
       for (int l = rows - k; l <= rows ; l++)
       {
            printf(" %d ",l);
       }
       printf("\n");
    }
    
    
    return 0;
}