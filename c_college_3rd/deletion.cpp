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

void deletion(int arr[], int size, int index)
{
    // starting from given index and going till the last second element
    for (int i = index; i < size - 1; i++)
    {
        // shifting each element backwards
        arr[i] = arr[i + 1];
    }
    
}

int main()
{
    int arr[20];
    int size = 5;

    // Index for deletion
    int index = 3;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element no " << i << ": ";
        cin >> arr[i];
    }

    cout << "Before Deletion: \n";
    traversal(arr, size);

    deletion(arr, size, index);
    size -= 1;
    cout << "After Deletion: \n";
    traversal(arr, size);

    return 0;
}