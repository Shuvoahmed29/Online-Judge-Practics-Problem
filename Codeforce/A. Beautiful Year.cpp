#include<iostream>
using namespace std;
int main()
{
    long long int y,a,b,c,d,k=0;
    cin>>y;
    y=y+1;
    while(y>=1000)
    {
        a=y/1000;
        b=y/100;
        b=b%10;
        c=y/10;
        c=c%10;
        d=y%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            cout<<y<<endl;
            return 0;
        }
        y=y+1;
    }
}
