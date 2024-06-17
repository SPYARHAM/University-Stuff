#include <iostream>
using namespace std;
int main()
{
    cout<<"\n\nMULTIPLICATION OF MATRIX \n\n";
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
    cout << "Enter rows and columns for first matrix: \n";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: \n";
    cin >> r2 >> c2;
    while (c1!=r2)
    {
        cout << "\nError! column of first matrix not equal to row of second.\n";
        cout << "\nEnter rows and columns for first matrix: \n\n";
        cin >> r1 >> c1;
        cout << "Enter rows and columns for second matrix: \n";
        cin >> r2 >> c2;
    }
    cout << endl << "Enter elements of FIRST matrix :\n" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    cout << endl << "Enter elements of SECOND matrix :\n" << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    cout << "\nFIRST MATRIX : \n";
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c1; j++)
        {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "\nSECOND MATRIX : \n";
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            cout << b[i][j] << "  ";
        }
        cout << endl;
    }
    for(i = 0; i < r1; ++i)
    {
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }
    }
    for(i = 0; i < r1; ++i)
    {
        for(j = 0; j < c2; ++j)
        {
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == c2-1)
        cout << endl;
    }
    return 0;   }




