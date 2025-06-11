#include <stdio.h>
#include <stdlib.h>

int binary_search(int arr[], int value, int start, int end)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (value == arr[mid])
            return mid;

        if (value > arr[mid])
            return binary_search(arr, value, mid + 1, end);
        else
            return binary_search(arr, value, start, mid - 1);
    }
    
    return -1;
}

int main()
{
    int arr[] = {1, 5, 8, 10, 11, 15, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int find = 11;


    int res = binary_search(arr, find, 0, size - 1);
    printf("%d \n", res);

    return 0;
}
