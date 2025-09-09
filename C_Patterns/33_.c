/* 
Program to implement the following pattern
 1  1  1  1 
 1  2  2  1 
 1  2  2  1
 1  1  1  1

*/

#include <stdio.h>
 
int main()
{
    int rows;
    printf("Enter number of rows : \n");
    scanf(" %d", &rows);
    
    for(int i = 1 ; i<= rows ; i++)
    {
        for(int j = 1 ; j<= rows ; j++)
        {
            int top = i ;
            int left = j ;
            int right = rows - j + 1 ;
            int bottom = rows - i + 1 ;
            
            int min = top < left ? top : left ;
            min = min < right ? min : right ;
            min = min < bottom ? min : bottom ;
            
            printf(" %d ",min);
        }
        printf("\n");
    }
    return 0;
}