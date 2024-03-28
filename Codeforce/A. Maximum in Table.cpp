/*#include<iostream>
using namespace std;
int main()
{
    long long int n,i;
    cin>>n;
    n=n-1;
    long long int A[10]={1,2,6,20,70,252,924,3432,12870,48620};
    for(i=0;i<10;i++)
    {
        if(n==i)
        {
            cout<<A[i]<<endl;
            return 0;
        }
    }
}*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        arr[0][i]=1;
        arr[i][0]=1;
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            arr[i][j]=arr[i-1][j]+arr[i][j-1];
        }
    }
    cout<<arr[n-1][n-1]<<endl;
    return 0;
}
