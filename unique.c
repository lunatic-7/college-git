#include <stdio.h>

void traverse(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int uniqueNo(int arr[], int size)
{
    int ctr;
    for (int i = 0; i < size; i++)
    {
        ctr = 0;
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    ctr++;
                }
            }
        }
        if (ctr == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}
int main()
{
    int arr[] = {1, 1, 2, 3, 2, 7, 4, 3, 3, 1};
    int size = sizeof(arr) / sizeof(int);

    traverse(arr, size);
    uniqueNo(arr, size);

    return 0;
}