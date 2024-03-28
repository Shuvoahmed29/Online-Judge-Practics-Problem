#include<iostream>
using namespace std;
int main()
{
    int p;
    cout<<"Enter Number of value: ";
    cin>>p;
    int A[p];
    for(int j=0;j<p;j++)
    {
        cin>>A[j];
    }
    int n,sum=0;
    cout<<"Which value do u want: ";
    cin>>n;
    for(int i=0; i<p; i++)
    {
        if(n==A[i])
            sum++;
    }
    cout<<"The value " <<n<<" stay "<<sum<<" time."<<endl;
    return 0;
}
