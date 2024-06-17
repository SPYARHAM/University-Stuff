#include<iostream>
using namespace std;
int main()
{
int a[20],n,x,i,flag=0;
cout<<"\nEnter number of elements of the array: \n";
cin>>n;
cout<<"\nEnter the elements of the array\n";
for(i=0;i<n;++i)
cin>>a[i];
cout<<"\nEnter an element to search:\n";
cin>>x;
for(i=0;i<n;++i)
{
if(a[i]==x)
{
flag=1;
break;
}
}
if(flag)
cout<<"\nElement is found and it is at "<<i+1<<" positon: \n\n";
else
cout<<"\nElement not found \n\n";
return 0;
}

