#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,m1;
    cin>>n>>m;
    int arr[m],i,sum;
    for(i=0; i<m; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    m1=arr[m-1]-arr[0];
    for(i=n; i<=m; i++)
    {
        sum=arr[i-1]-arr[i-n];
        sum=abs(sum);
        m1=min(m1,sum);
    }
    cout<<m1<<endl;
    return 0;
}
