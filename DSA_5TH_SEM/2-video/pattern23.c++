#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 1;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        for (int col = 1; col <= row; col++)
        {
            cout << sum;
            sum++;
        }
        cout << endl;
    }
}
