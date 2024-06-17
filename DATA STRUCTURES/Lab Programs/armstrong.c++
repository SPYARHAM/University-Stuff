#include <iostream>
using namespace std;
int main()
{
    int num,rem,armstrong=1,reverse=0,q,count=0,i;
    cout<<"\nENTER AN ARMSTRONG NUMBER\n\n";
    cin>>num;
    i=num;
    while(num>0)
    {   
        num=num/10;
        count++; 
    }
    q=count;
    num=i;
    while(num>0)
    {
        rem=num%10;
            while(count>0)
            {
                armstrong=armstrong*rem;
                count--;
            }
        reverse=reverse+armstrong;
        num=num/10;
        count=q;
        armstrong=1;
    }
    cout<<"\nReversed Number is:"<<reverse<<endl;
    if(i == reverse)
    {
        cout<<"\nNUMBER IS ARMSTRONG NUMBER\n\n";
    }
    else
    {
        cout<<"\nNUMBER IS  NOT AN ARMSTRONG NUMBER\n\n";
    }
}


