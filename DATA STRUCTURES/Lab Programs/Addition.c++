#include <iostream>
using namespace std;

int main() 
 {
    cout << " \nADDITION OF TWO MATRICES \n";
    int row, col, i, j;
    int a[10][10], b[10][10], sum[10][10];

    cout << "\nEnter the number of Rows and Columns of matrix : ";
    cin >> row >> col;

    cout << "\nEnter the " << row * col << " elements of First matrix : \n";

   for(i = 0; i < row; ++i)
   {
       for(j = 0; j < col; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }
   }
       cout<<endl;
    cout << "Enter the " << row * col << " elements of Second matrix : \n";
  for(i = 0; i < row; ++i)
  {

  
       for(j = 0; j < col; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }
  }
       cout<<endl;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "FIRST MATRIX : \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "SECOND MATRIX : \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << b[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "SUM OF MATRIX : \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << sum[i][j] << "  ";
        }
        cout << "\n";
    }
    return 0;
 }



