// program to demonstrate string functions in C

#include <stdio.h>
#include <string.h>
 
int main()
{
    /* 1) Function to find the length of given string using strlen()*/
    char string[] = "Namaste India!";
    printf("The length of the string %s is %d\n",string , strlen(string));
  
    /* 2) Function to copy one string to another using strcpy()*/
    char source[] = "Password";
    char destination[20];
    strcpy(destination, source);
    printf("The copied string is %s\n", destination);

    /* 3) Function to concatenate two strings using strcat()*/
    char str1[20] = "Hello, ";
    strcat(str1, "Pankaj!");
    printf("The concatenated string is %s\n", str1);

    /* 4) Function to compare two string */
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    if (strcmp(name, "Pankaj") == 0)
        printf("Welcome Pankaj!\n");
    else
        printf("You are not Pankaj!\n");

    /* 5) Function to reverse the given string */
    char s[10];
    printf("Enter a string: ");
    scanf("%s", s);
    printf("Before reversing \n string is %s\n",s);
    strrev(s);
    printf("After reversing \n string is %s\n",s);

    /* 6) Function to tokenize string */
    char st[80] = "C programming is fun";
    char *token = strtok(st, " ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}