#include<iostream> 
using namespace std;

const int MAX=100;
void printDiagonalSums(int mat[][MAX],int n) 
{
  int principal=0,secondary=0; 
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
          //Conditionforprincipaldiagonal
           if(i==j)
           principal+=mat[i][j];
          //Conditionforsecondarydiagonal
           if((i+j)==(n-1))
           secondary+=mat[i][j];
        }
    }
       cout<<"\nPrincipal Diagonal:"<<principal<<endl;
       cout<<"\nSecondary Diagonal:"<<secondary<<endl<<endl;
}
int main() 
{
    int a[][MAX]={ {1,2,3,4},{5,6,7,8},
                   {1,2,3,4},{5,6,7,8} };
    printDiagonalSums(a,4);
    return 0; 
}

