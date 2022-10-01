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

// Bubble sort array, to use in binary search
void sorted(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < (size - 1 - i); j++) // for comparison in each pass.
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Will give index of element in sorted array
int binarySearch(int arr[], int size, int element)
{
    int high, low, mid;
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
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

    // Sorting
    sorted(arr, size);
    cout << "Sorted Array: ";
    traversal(arr, size);

    // Element to find
    int element;
    cout << "Enter element to find: ";
    cin >> element;

    int index = binarySearch(arr, size, element);

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