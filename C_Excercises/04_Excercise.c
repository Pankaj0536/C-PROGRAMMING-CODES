// program to typecast integer number to float 

#include <stdio.h>

float convert_to_float(int num)
{
    return (float)num;
}

int main()
{
    int n;

    printf("Enter any integer number which to be converted : ");
    scanf("%d", &n);

    printf("%d in float is %0.4f\n",n, convert_to_float(n));

    return 0;
}