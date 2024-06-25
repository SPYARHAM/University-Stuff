#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, value = 0;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << char('A' + value) << " ";
            value++;
        }
        cout << endl;
    }
}