#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n, sum = 0;
//     cin >> n;
//     int i = 2;
//     while (i <= n)
//     {
//         if (i % 2 == 0)
//         {
//             sum = sum + i;
//         }
//         i++;
//     }
//     cout << sum;
//     return 0;
// }

int main()
{
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;

    int num = 2;
    int sum = 0;

    while (num <= n)
    {

        cout << num << " ";

        if ((num % 2) == 0)
        {
            sum = sum + num;
        }
        num = num + 2;
    }
    cout << "\n Sum of Even numbers from 1 to " << n << " is: " << sum << endl;
}