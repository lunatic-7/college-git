#include <iostream>

using namespace std;

void traversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void insertion(int arr[], int size, int element, int index) 
{
    // starting from last element and going until i is greater than or equal to index
    for (int i = size - 1; i >= index; i--)
    {   
        // shifting each element forward
        arr[i + 1] = arr[i];
    }
    // setting the element at given index
    arr[index] = element;
}

int main()
{
    int arr[20] = {1,2,3,4,5};
    int size = 5;

    // To insert
    int element = 7;
    int index = 3;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element no " << i << ": ";
        cin >> arr[i];
    }

    cout << "Before insertion: \n";
    traversal(arr, size);

    insertion(arr, size, element, index);
    size += 1;
    cout << "After Insertion: \n";
    traversal(arr, size);

    return 0;
}