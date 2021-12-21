#include <stdio.h>
 
int main()
{
    int arr[7] = {1,2,3,4,5,6,7};

    // int size;

    // size = sizeof(arr)/sizeof(int);

    for(int i=0; i < 7; i++)
    {
        printf("Enter your array at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i < 7; i++)
    {
        printf("Your array at index %d is: %d\n", i, arr[i]);
    }
    return 0;
}