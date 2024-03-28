#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double r,A;
    cin>>r;
    A=3.14159*r*r;
    cout<<fixed;
    cout<<"A="<<setprecision(4)<<A<<endl;
    return 0;
}

