#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5] = {408, 555, 2334, 543454, 3454};
    int b[5] = {408, 555, 2334, 543454, 3454};
    int c[5] = {408, 555, 2334, 543454, 3454};
    int p[10] = {408, 555, 2334, 543454, 3454};
    int cost_function;

    for (int i = 0; i < 5; i++)
    {
        cost_function = a[i] + b[i] * p[i] + c[i] * (pow(p[i], 2));
    }
    cout << "cost_function" << cost_function;
    return 0;
}
