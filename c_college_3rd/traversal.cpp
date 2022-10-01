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

    return 0;
}