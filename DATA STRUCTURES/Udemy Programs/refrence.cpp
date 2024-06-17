#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &r=a;
    r++;
    a++;
    int b=14;
    r=b;
    cout<<a<<endl<<r<<endl<<b<<endl;
    return 0;
}