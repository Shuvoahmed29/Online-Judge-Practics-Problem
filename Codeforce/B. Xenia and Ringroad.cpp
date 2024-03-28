#include<iostream>
using namespace std;
int main()
{
    long long int n,m,i,sum=0;
    cin>>n>>m;
    long long int arr[m];
    for(i=0; i<m; i++)
    {
        cin>>arr[i];
    }
    sum=sum+(arr[0]-1);
    for(i=0; i<m-1;i++)
    {
        if(arr[i]<=arr[i+1])
        {
            sum=sum+(arr[i+1]-arr[i]);
        }
        else
        {
            sum=sum+(n-(arr[i]-arr[i+1]));
        }
    }
    cout<<sum<<endl;
    return 0;
}
