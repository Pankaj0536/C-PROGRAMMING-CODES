// Program to take employ user id using runtime memory allocation 
#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
void main()
{
    int n;
    int *ptr;

    printf("Enter number of Employees \n");
    scanf("%d",&n);
    
    ptr=(int *)malloc((n+1)*sizeof(int));

    for(int i=1; i<4;i++)
    {
        printf("Enter Employ id of %d employee:\n",i);
        scanf("%d",&ptr[i]);

        printf("Your Employ id is %d\n",ptr[i]);
    }
    free(ptr);
   
} 