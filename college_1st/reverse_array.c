#include <stdio.h>
 
int main()
{
    int arr[] = {1,2,3};

    int size = sizeof(arr)/sizeof(int);

    for(int i=size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}