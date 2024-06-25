#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        // loop to print spaces
        int spaces = n - row;
        while (spaces)
        {
            cout << " ";
            spaces--;
        }
        // loop to print star
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}