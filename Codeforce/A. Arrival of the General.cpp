#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sm=101,larg=0,mini,maxi;
    cin>>n;
    int arr[n],sum;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(larg<arr[i])
        {
            larg=arr[i];
            maxi=i;
        }
        if(arr[i]<=sm)
        {
            sm=arr[i];
            mini=i;
        }
    }
    if(maxi>mini)
    {
       mini++;
    }
    sum=maxi+(n-1)-mini;
    cout<<sum<<endl;
    return 0;
}
