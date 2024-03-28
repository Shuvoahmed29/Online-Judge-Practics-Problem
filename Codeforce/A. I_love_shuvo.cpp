#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cunt=0;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxi=arr[0];
    int mixi=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
            cunt++;
        }
        if(arr[i]<mixi)
        {
            mixi=arr[i];
            cunt++;
        }
    }
    cout<<cunt<<endl;
    return 0;
}
