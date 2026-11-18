#include <iostream>
using namespace std;

void displayArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Element at index " << i << " is " << arr[i] << endl;
    }
}

void deleteElement(int arr[], int &n, int pos)
{
    for(int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos;

    displayArray(arr, n);

    cout << "Enter position for deletion: ";
    cin >> pos;

    deleteElement(arr, n, pos);

    cout << "Array after deletion:" << endl;
    displayArray(arr, n);

    return 0;
}