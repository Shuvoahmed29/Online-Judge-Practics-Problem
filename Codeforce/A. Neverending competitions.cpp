#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int t,p,n;
    cin>>t;
    n=t;
    string a,b,c;
    cin>>a;
    cin>>b;
    for(p=1; p<t; p++)
    {
        cin>>c;
    }
    if(n%2!=0)
    {
        printf("contest\n");
    }
    else
    {
        printf("home\n");
    }
    return 0;
}
