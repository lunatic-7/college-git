#include <stdio.h>

// Constraints
// 1 <= size,rShift <= 1000000
// 1 <= Arr[i] <= 10^9

int *addArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter index no. %d of arr: ", i);
        scanf("%d", &arr[i]);
    }
    return arr;
}

int showArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int *rShift(int arr[], int size, int shiftSize)
{
    int j = 0;

    for (int i = 0; i < size; i++)
    {
        int mag = (size - shiftSize);
        int temp;
        if (i < mag)
        {
            temp = arr[mag - i - 1];
            arr[size - i - 1] = temp;
        }
    }
    return arr;
}

int main()
{
    int size, shiftSize, *shifted;
    int *n;
    printf("Enter the size of your array: ");
    scanf("%d", &size);

    printf("The the times of right shift: ");
    scanf("%d", &shiftSize);

    int arr[size];

    n = addArr(arr, size);
    showArr(n, size);
    shifted = rShift(n, size, shiftSize);
    showArr(shifted, size);
    return 0;
}