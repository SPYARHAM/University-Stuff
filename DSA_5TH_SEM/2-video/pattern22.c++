#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << row + col - 1;
        }
        cout << endl;
    }
}
