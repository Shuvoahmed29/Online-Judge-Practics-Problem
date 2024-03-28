#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n],B[n],i,j,c=0;
    for(i=1;i<=n;i++)
    {
        cin>>A[i];
        cin>>B[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        if(A[i]==B[j])
        {
            c++;
        }
    }
    cout<<c<<endl;
}
