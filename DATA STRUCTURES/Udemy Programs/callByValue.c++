#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a,b;
    a=10,b=20;
    cout<<"Value of A and B before swapping is :"<<a<<" , "<<b<<endl;
    swap(a,b);
    cout<<"Value of A and B after swapping is :"<<a<<" , "<<b<<endl;
    return 0;

}