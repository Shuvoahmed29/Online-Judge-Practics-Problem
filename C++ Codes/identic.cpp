#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y,k,p=0;
    cout<<"Enter the Number of Rows     : ";
    cin>>x;
    cout<<"Enter the Number of Columns  : ";
    cin>>y;
    while(x!=y)
    {
        cout<<"Error!!!! You Need rows & columns must be equal"<<endl;
        cout<<"Enter the Number of Rows     : ";
        cin>>x;
        cout<<"Enter the Number of Columns  : ";
        cin>>y;
    }
    int element[x][y],i,j;
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            cout<<endl;
            cout<<"element - "[ <<i ],[ <<j ]" : ";
            cin>>element[i][j];
        }
    }
    cout<<endl<<endl;
    cout<<"The matrix is : "<<endl;
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            cout<<element[i][j]<<" ";

        }
        cout<<endl;
    }
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            if(i!=j)
            {
                if(element[i][j]==0)
                    p++;
            }


        }

    }
    k = (x*y)-p;

    if(k==x)
    {
        cout<<"The matrix is an identity matrix."<<endl;
    }
    else
    {
        cout<<"The matrix is NOT an identity matrix."<<endl;
    }

}






