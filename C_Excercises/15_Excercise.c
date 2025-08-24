// program to find square root of any number using newton raphson method
#include <stdio.h>
 
float sroot(int N)
{
   float x0 = N/2.0, x1;

   while (1)
   {

    x1 = 0.5*(x0 + N/x0);
    if((x1-x0 < 0.000001) && (x1-x0 > -0.000001))//if(x1 == x0)you can use but not effecient
    break;
   

    x0 = x1;
   }
   return x0;
   

}
int main()
{
    int num;

    printf("Enter any positive real number (num >= 0) : ");
    scanf("%d",&num);
    if(num < 0)
    {
        printf("Number %d is not positive real number.\n",num);
        return -1;
    }
    
    printf("The square root of %d is %f \n",num ,sroot(num));
    return 0;
}