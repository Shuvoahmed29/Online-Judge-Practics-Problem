#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int A[2][3],B[2][3],C[2][3];
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



    cout<<"Enter the Value of Matrix B."<<endl;
    for(int row=0; row<2; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout<<"B["<<row<<"]["<<col<<"] = ";
            cin>>B[row][col];
        }
        cout<<endl;
    }



    for(int row=0; row<2; row++)
    {
        for(int col=0; col<3; col++)
        {
            C[row][col] = A[row][col] + B[row][col];

        }

    }
    cout<<"The Value of Matrix A is"<<endl;
    for(int row=0; row<2; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout<<A[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<"The Value of Matrix B is"<<endl;
    for(int row=0; row<2; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout<<B[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<"Sum of A+B = "<<endl;
     for(int row=0; row<2; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout<<C[row][col]<<" ";

        }
        cout<<endl;
    }
}


