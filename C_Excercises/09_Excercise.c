// Program to display fibonacchi series using iteration method 
#include <stdio.h>
int main()
{
   int n,first,second,next;
   printf("Enter the number till you want to print fibonacchi number\n");
   scanf("%d",&n);

   first = 0;
   second = 1;
   
   printf("%d %d ",first,second);
   
   while(1)
   {
        next = first + second;
        if (next > n )
        {
            break;
        }   
        printf("%d ",next);
        first = second;
        second = next;
   }

    return 0;
}