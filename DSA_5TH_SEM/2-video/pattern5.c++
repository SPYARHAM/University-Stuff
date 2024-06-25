#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1, sum = 0;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            sum++;
            cout << sum << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}