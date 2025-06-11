// Program to implement 1d array 
//program include display of grades
#include <stdio.h>
int main()
{
int marks[4];
for (int i = 0; i < 4; i++)
{
    printf("Enter the marks of %d roll no. of an array\n",i);
    scanf("%d",&marks[i]);
}
for (int i = 0; i < 4; i++)
{
    printf("the marks of roll no. %d is %d\n",i,marks[i]);
    if (marks[i]>75)
    {
printf("The marks of roll no. %d is distinction\n",i);
    }
   else if (marks[i]>=35)
   {
   printf("the marks of roll no. %d is average\n",i);
   }
   else
   {
    printf("The student is fail\n");
   }
}
return 0;
}