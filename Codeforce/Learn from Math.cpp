#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<"4"<<" "<<n-4<<endl;
    }
    else
    {
        cout<<"9"<<" "<<n-9<<endl;
    }
    return 0;
}

