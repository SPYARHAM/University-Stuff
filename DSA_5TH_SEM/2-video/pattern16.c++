#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        char start = 'A' + n - row;
        for (int col = 1; col <= row; col++)
        {

            cout << start << " ";
            start++;
        }
        cout << endl;
    }
}