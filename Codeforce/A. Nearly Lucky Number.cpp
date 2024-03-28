#include<iostream>
using namespace std;
int main()
{
    long long int n,r,sum=0,p,k=0;
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        if(r==7 || r==4)
        {
            sum++;
        }
        n=n/10;
        k++;
    }
   if(sum==4 || sum==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
