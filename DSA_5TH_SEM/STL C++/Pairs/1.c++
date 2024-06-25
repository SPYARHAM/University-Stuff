#include <iostream>
using namespace std;
int main()
{
    pair<int, string> p;     // declaration
    p = make_pair(2, "abc"); // first method of initialization
    cout << p.first << " " << p.second << endl;
    // p={2,"abc"}; // second method of intialization
    pair<int, string> p1 = p;
    // no change in value of p because p1 is copy of p1
    // but if we pass p1 as pass by refrence then changing the value of p1 will
    // change the value of p
    p1 = make_pair(3, "abcde");
    cout << p.first << " " << p.second << endl;
    pair<int, string> &p2 = p;
    p2 = make_pair(4, "abcdef");
    cout << p.first << " " << p.second << endl;
    return 0;
}