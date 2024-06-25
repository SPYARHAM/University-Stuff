#include <bits/stdc++.h>
using namespace std;
// function to print the vector elements
void printVec(vector<int> v)
{
    cout << "Size of array: " << v.size() << endl; // to know the size we can use v.size() function
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // here we can print the elements
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    int size;
    cout << "Enter size: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        printVec(v);    // to demonstrate the dynamic nature of vectors
        v.push_back(x); // it pushes the element at the end of the array and here time complexity is 0(1)
    }
    printVec(v);
}