#include <stdio.h>

int display(int arr[], int size)
{
    for(int i=0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void reverseSort(int arr[], int size)
{
    
    for(int i=0; i < size - 1; i++)
    {
        for(int j=0; j < size - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp;
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }  
        } 
    }
                
}
    
int main()
{
    int arr[] = {2,5,33,4,3,5,0};
    int size = sizeof(arr)/ sizeof(int);
    display(arr, size);
    reverseSort(arr, size);
    printf("\n");
    display(arr, size);
    
    return 0;
}