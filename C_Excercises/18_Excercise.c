/* program to find the index number of the two element which sum is equal to target
example
arr[] = {12 , 4 , 8 } , target = 20
output : 0 , 2 */

#include <stdio.h>
 
int display(int array[],int len)
{
    printf("Array : ");
    for (int i = 0; i < len ; i++)
    {
      printf("%d ",array[i]);
       
    }
    printf("\n");

}
int main()
{
    int arr[] = {12 , 4, 8} , length ;
    int target = 16;

    length = sizeof(arr)/sizeof(arr[0]);
    display(arr , length);
    printf("target : %d\n",target);
    for(int i = 0  ; i < length   ; i++ )
    {
        for (int j = i+1; j < length ; j++)
        {
            if(arr[i] + arr[j] == target)
            printf("%d %d\n",i,j);
            
        }
        
    }
    return 0;
}