#include <iostream>
using namespace std;
int main ()
{
    int num,i=0,rem;
    cout<<"\n ENTER AN INTEGER : \n";
    cin>>num;
    while(num>0)
    {
        num = num/10;
        i++;
    }
    cout<<"\n NUMBER OF DIGITS IN AN INTEGER IS :\n"<<i;
    return 0;
}


