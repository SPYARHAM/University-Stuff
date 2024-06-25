#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p_array[3];
    p_array[0] = make_pair(1, 2);
    p_array[1] = make_pair(4, 5);
    p_array[2] = make_pair(5, 6);
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
    swap(p_array[0], p_array[2]);
    cout << "after reversing" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
    return 0;
}