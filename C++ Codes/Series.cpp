#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,sum=0,i;
    cout<<"Enter any integer Number :  ";
    cin>>n;
    for(i=2;i<=n;)
    {
        sum = sum + i;
        i = i+2;
    }
    cout<<"The Result is : "<<sum<<endl;
    getch();
}
