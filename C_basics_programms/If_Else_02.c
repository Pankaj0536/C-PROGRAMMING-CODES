//  programm to implement if else statements(control statements)
 #include <stdio.h>
int main()
{
    int c;
    printf("Enter the  subject code which you are passed\n");
    printf("for both maths and science the subject code is 1234\n");
    printf("for only maths the subject code is 12\n");
    printf("for only science the subject code is 34\n");
    scanf("%d", &c);
    printf("you have passed subjects which code is %d\n", c);
    if (c == 1234)
    {
        printf(" You won the geometry box which cost is 45rs");
    }
    else if (c == 12)
    {
        printf("you won the pen which cost is 15 rs");
    }
    else if (c == 34)
    {
        printf("you won the pen which cost is 15 rs");
    }
    else
    {
        ("sorry!! you are failed in both subjects");
    }
    //  short trik to use if else statement
    //  a>b?printf("The value of a is greater than b\n"):printf("The value of bis greater than a\n");;

    return 0;
}
