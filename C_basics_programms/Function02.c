// program to implement call by value
#include <stdio.h>
 
void display(int a , int b)
{
    printf("a = %d\nb = %d\n",a,b);
}

int main()
{
    int a,b;

    printf("Enter value of a and b : \n");
    scanf("%d %d",&a , &b);

    display(a,b);//variable copy is passed 
    return 0;
}