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

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[20];
    int size = 5;


    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element no " << i << ": ";
        cin >> arr[i];
    }

    traversal(arr, size);

    // element to find
    int element;
    cout << "Enter element to find: ";
    cin >> element;


    int index = linearSearch(arr, size, element);

    // Checking if element was found
    if (index >= 0)
    {
        cout << "Element " << element << " is found at index: " << index;
    }
    else if (index == -1)
    {

        cout << "Not Found";
    }

    return 0;
}