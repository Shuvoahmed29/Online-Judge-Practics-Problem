#include<iostream>
using namespace std;
int main()
{
    int n,p=0,q=0,t=0,th=0;
    while(1)
    {
        cin>>n;
        p++;
        if(n==1)
        {
            q++;
        }
        else if(n==2)
        {
            t++;
        }
        else if(n==3)
        {
            th++;
        }
        if(n==4)
            break;
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<q<<endl;
    cout<<"Gasolina: "<<t<<endl;
    cout<<"Diesel: "<<th<<endl;
    return 0;
}

