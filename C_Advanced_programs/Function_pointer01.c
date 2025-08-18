// Program to Implement function pointer 
#include <stdio.h>

//Average calculator function

float avg(int a, int b)
{
    float c;

    c = a + b;

    return c / 2;
}

void greetgoodevening(float (*fptr)(int, int))
{
    int x, y;

    printf("Hello good evening user\nEnter two integer number which you want average\n");
    scanf("%d %d", &x, &y);

    printf("The avg of %d and %d is %0.3f\n", x, y, fptr(x, y)); //calling function pointer
}
int main()
{
    float (*fptr)(int, int);//function pointer
    
    fptr = avg;

    greetgoodevening(fptr);

    return 0;
}