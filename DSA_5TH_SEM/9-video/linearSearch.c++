#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
        }
    return false;
}
int main()
{
    int n, key;
    cout << "Enter size of array";
    cin >> n;
    int arr[n];
    cout << "Enter Array Elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter a elements you want to search in a array:";
    cin >> key;
    bool search = linearSearch(arr, n, key);
    if (search)
    {
        cout << "Key found";
    }
    else
    {
        cout << "Key not found";
    }
}