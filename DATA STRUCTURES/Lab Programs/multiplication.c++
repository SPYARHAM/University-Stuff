#include <iostream>
using namespace std;

int main()
{
    int n, r;

    cout << "\nENTER A NUMBER: \n";
    cin >> n;

    cout << "\nENTER RANGE: \n";
    cin >> r;
    
    for (int i = 1; i <= r; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    
    return 0;
}



