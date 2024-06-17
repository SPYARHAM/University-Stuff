#include<iostream>
using namespace std;
struct rectangle 
{
    int length ; 
    int breadth ;

};
 int main()
 {
    struct rectangle *p; 
    p=new rectangle;
    p->length=10;
    p->breadth=11;
    cout<<p->breadth<<endl<<p->length<<endl;
    return 0;
 }