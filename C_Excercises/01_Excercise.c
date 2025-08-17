// write a program to display the multiplication of any number given by user without using loop 
#include <stdio.h>
 
void display(int num)
{
    printf("The multiplication table is : \n");
    printf("%d X  0 = %d\n",num,num*0);
    printf("%d X  1 = %d\n",num,num*1);
    printf("%d X  2 = %d\n",num,num*2);
    printf("%d X  3 = %d\n",num,num*3);
    printf("%d X  4 = %d\n",num,num*4);
    printf("%d X  5 = %d\n",num,num*5);
    printf("%d X  6 = %d\n",num,num*6);
    printf("%d X  7 = %d\n",num,num*7);
    printf("%d X  8 = %d\n",num,num*8);
    printf("%d X  9 = %d\n",num,num*9);
    printf("%d X  10 = %d\n",num,num*10);
   
}

int main()
{
    int n;

    printf("Enter any value : ");
    scanf("%d",&n);

    display(n);
    return 0;
}