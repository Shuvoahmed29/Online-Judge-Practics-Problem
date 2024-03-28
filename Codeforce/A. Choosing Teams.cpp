#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n],cunt=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(5-arr[i]>=k)
        {
            cunt++;
        }
    }
    cout<<cunt/3<<endl;
    return 0;
}
