#include<iostream>
using namespace std;
int main()
{
    int n, i, arr[50], j, temp;
    cout<<"\nEnter the Size of the array:\n ";
    cin>>n;
    cout<<"Enter "<<n<<" Elements of an array: \n";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nSorting the Array using Bubble Sort Technique..\n";
    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"\nArray Sorted Successfully!\n";
    cout<<"\nThe New Array is: \n";
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl<<endl;
    return 0;
}


