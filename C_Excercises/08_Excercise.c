// Program to print fibonacchi numbers at certain position using recurtion 
#include <stdio.h>

// this is called fibonacchi series
// 0,1,1,2,3,5,8,13,21

int fibo(int n)
{
    if (n==1 || n==2)
    {
        return n-1;
    }
    return (fibo(n-1)+fibo(n-2));
}

int main()
{

int num;

printf("Enter the position which you wnat fibonacchi number\n");
scanf("%d",&num);

printf("The fibonacchi number at position %d is %d\n",num,fibo(num));

return 0;
}