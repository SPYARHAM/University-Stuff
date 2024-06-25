#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{

    int start = 0;
    int end = 1;

    while (end < n)
    {
        swap(arr[start], arr[end]);
        start += 2;
        end += 2;
    }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int size;
    cout << "Enter size of an array:" << endl;
    cin >> size;
    int arr[size], b[size], j = 0;
    cout << "Enter array Elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "After reversing array:" << endl;
    reverse(arr, size);
    printArray(arr, size);

    return 0;
}
