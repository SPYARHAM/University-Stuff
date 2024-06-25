#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int n)
{
    int Number = 0;
    int cnt = 0;
    while (n)
    {
        int rem = n % 2;
        int c = pow(10, cnt);
        Number += rem * c;
        n /= 2;
        cnt++;
    }
    return Number;
}
int binaryToDecimal(int n)
{
    int number = 0;
    int cnt = 0;
    while (n)
    {
        int rem = n % 2;
        int c = pow(2, cnt);
        number += rem * c;

        n = n / 10;
        cnt++;
    }
    return number;
}

int main()
{
    int n;
    cin >> n;
    cout << "Decimal to Binary: " << decimalToBinary(n) << endl;
    cout << "Binary to Decimal: " << binaryToDecimal(n) << endl;
    return 0;
}
