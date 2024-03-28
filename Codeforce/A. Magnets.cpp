#include<iostream>
using namespace std;
int main()
{
    int t,count1=0,i;
    cin>>t;
    int arr[t];
    for(i=0; i<t; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<t; i++)
    {
        if(arr[i]!=arr[i+1])
        {
            count1++;
        }
    }
    cout<<count1<<endl;
    return 0;
}
