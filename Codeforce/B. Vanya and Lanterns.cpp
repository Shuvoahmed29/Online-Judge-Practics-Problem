#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,l,p=0;
    cin>>n>>l;
    long long int arr[n],i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0;i<n-1;i++)
    {
        if(arr[i+1]-arr[i]>p)
        {
            p=arr[i+1]-arr[i];
        }
    }
    double a=arr[0];
    double b=(double)p/2;
    b=max(a,b);
    double c=l-arr[n-1];
    c=max(c,b);
    cout<<fixed<<setprecision(10)<<c<<endl;
    return 0;
}
