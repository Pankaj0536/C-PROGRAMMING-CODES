// Program to check whether the given string is palindrome or not
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[12];

    printf("Enter the number which you want to check wheather it is palindrome or not :\n");
    scanf("%s", &s1);

    printf("The entered number is %s\n", s1);
    char s2[12];
    strcpy(s2, s1);
    strrev(s1);
    printf("The reversed number is %s\n", s1);
    if (strcmp(s1, s2))
    {
        printf("The number is not panidrome\n");
    }
    else
    {
        printf("The number is a palindrome\n");
    }
    return 0;
}
// by using function
//  #include <stdio.h>
//  int palindrome(int num)
//  {
//  int reversed=0;
//  int originalnum = num;
//  while ( num != 0)
//  {
//    reversed=reversed*10 + num%10;
//    num = num%10;//% returns remiander after performing num % 10
//  }
//  // printf("the reversed of that number is %d\n",reversed);
//  if (originalnum =reversed)
//  {
//    return 1;
//  }
//    return 0;
//  }
//  int main()
//  {
//    int number;
//   printf("Enter the number which you want to check whether  it is palindrome or not \n");
//   scanf("%d",&number);
//   printf("The number entered is %d\n",number);
//   if(palindrome(number))
//   {
//  printf("The entered number is palindrome\n");
//   }
//   else
//   {
//    printf("The entered number is not a palindrome\n");
//   }
//    return 0;
//  }
