/* 

 *                          * 
 *  *                    *  * 
 *  *  *              *  *  * 
 *  *  *  *        *  *  *  * 
 *  *  *  *  *  *  *  *  *  * 
 *  *  *  *        *  *  *  * 
 *  *  *              *  *  * 
 *  *                    *  * 
 *                          * 


*/

#include <stdio.h>
 
int main()
{
    int rows ;

    printf("Enter number of rows : \n");
    scanf("%d",&rows);
 
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" * ");
        }

         for (int k = 1; k <= 2 * (rows -i) ; k++)
        {
           printf("   ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }


    
    for (int i = 1; i <= rows - 1; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
           printf(" * ");
        }
     
        for (int k = 1; k <= 2*i; k++)
        {
            printf("   ");
        }

        for (int l = 1; l <= rows - i; l++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    
    printf("\n");
    return 0;
}