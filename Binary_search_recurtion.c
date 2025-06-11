
#include <stdio.h>
int binary_search(int arr[], int start, int end, int target);
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 45, 78, 90};
    int target = 10;

    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr, 0, n - 1, target);
    if (result != -1)
    {
        printf("The index number is %d\n", result);
    }
    else
    {
        printf("The element is not present in an array\n");
    }
    return 0;
}
int binary_search(int arr[], int start, int end, int target)
{
    if (end >= start)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] > target)
        {
            return binary_search(arr, start, mid - 1, target);
        }
        if (arr[mid] < target)
        {
            return binary_search(arr, mid + 1, end, target);
        }
    }
    return -1;
}