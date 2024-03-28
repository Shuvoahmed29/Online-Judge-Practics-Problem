#include<iostream>
using namespace std;
int main()
{
    int N,i,len,x=0,y=0,z=0,s1=0,j,s2=0,p;
    cin>>N;
    string A[2*N];
    for(i=1; i<=2*N; i++)
    {
        cin>>A[i];
        len=A[i].size();
        for(j=0; j<len; j++)
        {
            if(A[i][j]=='z')
                z++;
            else if(A[i][j]=='y')
                y++;
            else if(A[i][j]=='x')
                x++;
            if(i%2==0)
            {
                s2=z;
            }
            else
            {
                s1=z;
            }
            if(s1!=0 && s2!=0 && s1>s2)
            {
                cout<<"Data set #";
                cout<<p;
                cout<< ": S1 is older"<<endl;
                p++;
                s1=0;
                s2=0;
            }
            else if(s1!=0 && s2!=0 && s2>s1)
            {
                cout<<"Data set #";
                cout<<p;
                cout<< ": S1 is older"<<endl;
                p++;
                s1=0;
                s2=0;
            }
            else if(s1!=0 && s2!=0 && s2==s1)
            {
                s1=s1+y;
                s2=s2+y;
                if(s1>s2)
                {
                    cout<<"Data set #";
                    cout<<p;
                    cout<< ": S1 is older"<<endl;
                    p++;
                    s1=0;
                    s2=0;
                }
                s1=s1+x;
                s2=s2+x;
                if(s1>s2)
                {
                    cout<<"Data set #";
                    cout<<p;
                    cout<< ": S1 is older"<<endl;
                    p++;
                    s1=0;
                    s2=0;
                }
            }
            else if(s1==0 && s2==0)
            {
                cout<<"Data set #";
                cout<<p;
                cout<< ": Both are the same age"<<endl;
                p++;
                s1=0;
                s2=0;
            }
        }
    }
    return 0;
}
