#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any Number :  ";
    cin>>n;
    if((n%4==0 && n%100!=0) || n%400==0)
    {
        cout<<"This year is Leap Year."<<endl;
    }
    else
    {
       cout<<"This year NOT Leap Year."<<endl;
    }
    getch();
}
