// Program to reverse an array

#include <stdio.h>

void printarray(int array[], int n);
void reversedarray(int arr[], int a);


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    printarray(arr, 8);
    reversedarray(arr, 8);
    printarray(arr, 8);

    return 0;
}

void reversedarray(int arr[], int a)
{
    int temp;

    for (int i = 0; i < a / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[a - i - 1];
        arr[a - i - 1] = temp;
    }
}

void printarray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
