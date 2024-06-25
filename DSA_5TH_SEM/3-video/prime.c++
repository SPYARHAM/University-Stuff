#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number to check whether it is a Prime or Not: ";
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break; // to break the loop because we don't have to check for other numbers
        }
    }
    if (isPrime == true)
    {
        cout << n << " is a Prime Number" << endl;
    }
    else
    {
        cout << n << " is not Prime Number" << endl;
    }
}