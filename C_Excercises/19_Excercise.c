// Write a program to arrange the following names in alphabetical order.
// George
// Albert
// Tina
// Xavier
// Roger
// Tim
// William
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sort(char *str[], int size)
{
    char *temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
int main()
{
    char *string[] = {"George", "Albert", "Tina", "Xavier", "Roger", "Tim", "William"};
    int n = sizeof(string) / sizeof(string[0]);
    printf("Before Sorting, The string are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s ", string[i]);
    }
    printf("\n\n");
    sort(string, n);
    printf("After Sorting, The string are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s ", string[i]);
    }
    return 0;
}