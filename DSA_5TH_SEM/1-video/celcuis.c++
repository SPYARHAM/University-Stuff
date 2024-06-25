#include <bits/stdc++.h>
using namespace std;
int main()
{
    float c, f;
    cout << "Enter value of temperature in Fahrenheit : " << endl;
    cin >> f;

    c = 5 * (f - 32) / 9;

    cout << "The value in Celsuis is: " << c << " degree" << endl;
}