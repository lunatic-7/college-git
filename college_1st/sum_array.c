#include <stdio.h>

int display(int arr[], int size)
{
    for(int i=0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void arrSum(int arr[], int size)
{ int sum = 0;
    
    for(int i=0; i < size - 1; i++)
    {
        sum = sum + arr[i];
    }
    printf("The sum of your array is: %d", sum);
                
}
    
int main()
{
    int arr[] = {2,5,33,4,3,5,0};
    int size = sizeof(arr)/ sizeof(int);
    display(arr, size);
    printf("\n");
    arrSum(arr, size);
    
    return 0;
}