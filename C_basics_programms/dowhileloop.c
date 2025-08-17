// program to implement do while loop 
#include <stdio.h>

int main()
{ 
    int num, index=0;

    printf("Enter an int number:");
    scanf("%d",&num);

    do{ 
        printf("%d\n",index);
        index=index+1;//or index++
    }while (index<num);

    return 0;
}
