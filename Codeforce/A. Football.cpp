#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char A[100];
    cin>>A;
    int k=0,j=0,t;
    int len = strlen(A);
    if(len<7)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        for(int i=0; i<len; i++)
        {
            if(A[i]=='1')
            {
                j++;
                k=0;
            }
            else //1000000001

            {
                k++;
                j=0;
            }
            if(j==7 || k==7)
            {
                t=1;
                break;
            }
        }

        if(t==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

