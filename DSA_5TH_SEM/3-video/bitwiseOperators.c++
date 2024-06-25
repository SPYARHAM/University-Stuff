#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 4;
    int b = 6;

    cout << "A and B is: " << (a & b) << endl;
    cout << "A or is: " << (a | b) << endl;
    cout << "Negation A is: " << (~a) << endl;
    cout << "A XOR B is: " << (a ^ b) << endl;

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

    int i = 7;
    cout << (++i) << endl;
    cout << (i++) << endl;
    cout << (i--) << endl;
    cout << (--i) << endl;
}