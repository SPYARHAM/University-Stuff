#include<iostream>
using namespace std;
int add(int x,int y)
{
    int z;
    z=x+y;
    return (z);
}
int main()
{
    int a,b,c;
    a=10,b=15;
    c=add(a,b);
    cout<<"Sum is: "<<c<<endl;
    return 0;
}