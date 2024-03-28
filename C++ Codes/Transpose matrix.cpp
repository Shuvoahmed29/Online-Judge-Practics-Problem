#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int A[2][3],transpose[3][2];
    cout<<"Enter the Value of Matrix A."<<endl;
    for(int row=0; row<2; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout<<"A["<<row<<"]["<<col<<"] = ";
            cin>>A[row][col];
        }
        cout<<endl;
    }

    for(int row=0; row<2; row++)
    {
        for(int col=0; col<3; col++)
        {
            transpose[col][row] = A[row][col];
        }
        cout<<endl;

    }

    cout<<"A  =    ";
    for(int row=0; row<2; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout<<A[row][col]<<" ";
        }
        cout<<endl;
        cout<<'\t';
    }
    cout<<endl;
    cout<<"Trans = ";
    for(int col=0; col<3; col++)
    {
        for(int row=0; row<2; row++)
        {
            cout<<transpose[col][row]<<" ";
        }
        cout<<endl;
        cout<<'\t';
    }


}

