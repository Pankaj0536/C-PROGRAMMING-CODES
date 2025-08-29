/* palindrome
        1
      2 1 2
    3 2 1 2 3
*/
#include <stdio.h>
 
int main()
{
    int rows;

    printf("Enter number of rows: ");
    scanf("%d",&rows);


    for(int i = 1 ; i<=rows  ; i++)
    {
        for (int k = 1; k <= rows -i; k++)
        {
           printf("   ");
        }
        
        for (int j = i; j >= 1 ; j--)
        {
           printf(" %d ",j);
        }

        for (int l = 2; l <= i ; l++)
        {
            printf(" %d ",l);
        }
        printf("\n");
        
        

    }
    return 0;
}