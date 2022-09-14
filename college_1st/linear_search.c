#include <stdio.h>

int linearSearch(int arr[], int size, int value)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {12, 3, 34, 5, 6, 77, 3, 0, 1};

    int size = sizeof(arr) / sizeof(int);
    int value = 0;
    int index = linearSearch(arr, size, value);
    if (index == -1)
    {
        printf("NIL");
    }
    else
    {
    printf("Your value is present at index: %d", index);
    }

    return 0;
}