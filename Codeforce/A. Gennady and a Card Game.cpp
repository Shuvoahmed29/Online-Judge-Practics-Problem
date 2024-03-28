#include<iostream>
using namespace std;
int main()
{
    string A,B;
    long long int i,j,p=0;
    cin>>A;
    for(i=0; i<5; i++)
    {
        cin>>B;
        for(j=0; j<B.size(); j++)
        {
            if(B[j]==A[0] || B[j]==A[1])
            {
                p++;
            }
        }
    }
    if(p!=0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
