#include<iostream>
using namespace std;
int main()
{
    int n,M,i,sum=0,j,p;
    cin>>n;
    for(i=0; i<n; i++)
    {
        sum=0;
        cin>>M;
        cout<<"Input : "<<M<<endl;
        for(j=1; j<=M; j++)
        {
            if(M%j==0)
                sum++;
        }
        if(sum==2)
        {
            cout<<"prime"<<endl<<endl;;
            sum=0;
        }
        else
        {
            for(p=1; p<=100; p++)
            {
                sum=0;
                M=M-p;
                for(j=1; j<=M; j++)
                {
                    if(M%j==0)
                        sum++;
                }
                if(sum==2 && p<10)
                {
                    cout<<p-1<<endl<<endl;
                    break;
                }
                else if(sum==2 && p>10)
                {
                    cout<<p-11<<endl<<endl;
                    break;
                }

            }
        }

    }
    return 0;
}
