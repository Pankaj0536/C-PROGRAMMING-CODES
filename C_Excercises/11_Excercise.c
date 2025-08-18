// Program to find GCD of two number using recurtion
#include <stdio.h>

int gcd( int , int);

int main()
{
    int num1,num2;
    printf("Enter two number which you want to find GCD:\n");
    scanf("%d %d",&num1,&num2);
    printf("The GCD of %d and %d is %d\n",num1,num2,gcd(num1,num2));
    return 0;
}

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd( b , a % b);
}