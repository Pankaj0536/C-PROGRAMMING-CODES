// Program to calculate the power of a number using function

#include <stdio.h>
#include <stdlib.h>


int mypow(int target, int n);
int main()
{
    int num, power;

    printf("Enter the number :\n");
    scanf("%d", &num);

    printf("Enter it's power which you want to find :\n");
    scanf("%d", &power);

    int result = mypow(num, power);

    printf("The valaue of %d to the power %d is %d \n", num, power, result);
    return 0;
}
int mypow(int target, int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= target;
    }
    return result;
}