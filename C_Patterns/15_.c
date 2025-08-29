/* 
    1 3 5 7 9
    3 5 7 9
    5 7 9
    7 9
    9
    


*/

#include <stdio.h>
 
int main()
{
    int rows;

    printf("Enter the number of rows : ");
    scanf("%d",&rows);

    for (int i = 1; i <= rows ;  i++)
    {
        for (int j = 2*i-1; j <= 2*rows -1 ; j = j+2)
        {
            printf(" %d ",j);
        }
        printf("\n");
        
    }
    
    return 0;
}