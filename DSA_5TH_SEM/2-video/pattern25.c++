#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        int start = n - row + 1;
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << col << " ";
        }
        for (int col = 1; col <= row - 1; col++)
        {
            cout << "* * ";
        }
        for (int col = 1; col <= n - row + 1; col++)
        {

            cout << start << " ";
            start--;
        }
        cout << endl;
    }
}