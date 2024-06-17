#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j,matrix[10][10],transpose[10][10];
    cout<<"\nENTER THE NUMBER OF ROWS  OF A MATRIX:\n";
    cin>>m;
    cout<<"\nENTER THE NUMBER OF COLUMNS  OF A MATRIX:\n";
    cin>>n;
    cout<<"\nENTER ELEMENTS OF THE MATRIX:\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
    {
        for(i=0; i<m; ++i)
        {
            for(j=0; j<n; ++j)
            {
               transpose[j][i] = matrix[i][j];
            }
        }
    }
    cout<<"TRANSPOSE OF THE MATRIX IS:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<transpose[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}


