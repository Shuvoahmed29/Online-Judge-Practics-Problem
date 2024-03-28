#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3],sum=0;
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+3);
    sum=sum+arr[1]-arr[0];
    sum=sum+arr[2]-arr[1];
    cout<<sum<<endl;
    return 0;
}
