#include<iostream>
using namespace std;
int main()
{
    int n,j,temp,min,key;
    cout<<"\nEnter the Size of the Array :\n";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements for an Array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j >=0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j-1;
        }
        arr[j + 1] = key;
    }
    cout<<"Sorted Elements:\n";
    for( int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}



