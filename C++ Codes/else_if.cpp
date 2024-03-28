#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any integer number: ";
    cin>>n;
    if(n>0)
    {
        cout<<"Positive";



    }
    else if(n<0)
    {
        cout<<"Negative";
    }
    else if(n==0)
    {
        cout<<"Zero";
    }
    getch();
}
