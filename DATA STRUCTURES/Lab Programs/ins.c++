#include<iostream>
using namespace std;
int main()
{
    int arr[20],n,i,pos,elem,j,found,tot;
    cout<<"\nEnter Size of Array:\n";
    cin>>tot;
    cout<<"\nEnter "<<tot<<" Array Elements: \n";
    for(i=0; i<tot; i++)
        {
          cin>>arr[i];
        }    
    cout<<"ENTER CHOICE NUMBER\n";
    cout<<"#1 for INSERTION\n#2 for DELETION\n";
    cin>>n;
    switch (n)
    {
    
          case 1:   cout<<"\nEnter Element to Insert: \n";
                    cin>>elem;
                    cout<<"\nAt What Position ? :\n";
                    cin>>pos;
                    for(i=tot; i>=pos; i--)
                    { 
                        arr[i] = arr[i-1];
                    }
                        arr[i] = elem;
                        tot++;
                        cout<<"\nThe New Array is:\n";
                        for(i=0; i<tot; i++)
                            {
                                cout<<arr[i]<<"  ";
                                cout<<endl;
                            }
            break;
            case 2:     cout<<"\nEnter Element to Delete: ";
                        cin>>elem;
                        for(i=0; i<tot; i++)
                        {
                            if(arr[i]==elem)
                            {
                                for(j=i; j<(tot-1); j++)
                                    arr[j] = arr[j+1];
                                    found=1;
                                    i--;
                                    tot--;
                            }
                        }
                        if(found==0)
                        cout<<"\nElement doesn't found in the Array!\n";
                        else
                        {
                            cout<<"\nElement Deleted Successfully!\n";
                            cout<<"\n\nThe New Array is:\n";
                            for(i=0; i<tot; i++)
                            cout<<arr[i]<<"  ";
                        }
                    cout<<endl;

           default: cout<<"\nWRONG CHOICE NUMBER\n\n";
                     cout<<"\nTRY AGAIN\n";
            break;
    }
    
    return 0;
  }
    
 
