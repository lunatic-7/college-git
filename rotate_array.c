#include <stdio.h>

int *arrInp(int *arr[], int lArr)
{
    for(int i=0; i < lArr; i++)
    {
        printf("Enter index no. %d: ", i);
        scanf("%d", &arr[i]);
    }

    return arr;
    
    for(int i=0; i < lArr; i++)
    {
        printf("%d ", arr[i]);
    }
}

int rShift(int arr[], int lArr, int shift)
{

}


int main()
{
    int lArr;
    int shift;
    int *n;
    printf("Enter the length of your array: ");
    scanf("%d", &lArr);

    printf("Enter the number of shift you want to have rightwards: ");
    scanf("%d", &shift);

    int arr[lArr];


    n = arrInp(arr, lArr);
    rshift(n);

    return 0;
}