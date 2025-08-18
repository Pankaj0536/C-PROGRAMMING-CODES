
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice;
    char c;

    while (1)
    {
        printf("Enter 1 -> Lower TO Upper\nEnter 2 -> Upper To Lower\nEnter 3 -> Exit \n");
        scanf(" %d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the character in Lower Case : ");
            scanf(" %c", &c);
            printf("In Upper Case is : '%c' \n", c - 32);
            break;

        case 2:
            printf("Enter the character in Upper Case : ");
            scanf(" %c", &c);
            printf("In Lower Case is '%c' \n", c + 32);
            break;

        case 3:
            exit(0);

        default:
            printf("Error::Invalid Choice\n");
            break;
        }
    }
    return 0;
}