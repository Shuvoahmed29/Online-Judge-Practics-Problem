#include<iostream>
using namespace std;
int main()
{
    double l;
    int a,b,c,d,e,f,g,h,i,j,k,n;
    cin>>l;
    n=l*100;
    a=n/10000;
    n=n%10000;
    b=n/5000;
    n=n%5000;
    c=n/2000;
    n=n%2000;
    d=n/1000;
    n=n%1000;
    e=n/500;
    n=n%500;
    f=n/200;
    n=n%200;
    g=n/100;
    n=n%100;
    h=n/50;
    n=n%50;
    i=n/25;
    n=n%25;
    j=n/10;
    n=n%10;
    k=n/5;
    n=n%5;
    cout<<"NOTAS:"<<endl;;
    cout<<a<<" nota(s) de R$ 100.00"<<endl;
    cout<<b<<" nota(s) de R$ 50.00"<<endl;
    cout<<c<<" nota(s) de R$ 20.00"<<endl;
    cout<<d<<" nota(s) de R$ 10.00"<<endl;
    cout<<e<<" nota(s) de R$ 5.00"<<endl;
    cout<<f<<" nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:"<<endl;
    cout<<g<<" moeda(s) de R$ 1.00"<<endl;
    cout<<h<<" moeda(s) de R$ 0.50"<<endl;
    cout<<i<<" moeda(s) de R$ 0.25"<<endl;
    cout<<j<<" moeda(s) de R$ 0.10"<<endl;
    cout<<k<<" moeda(s) de R$ 0.05"<<endl;
    cout<<n<<" moeda(s) de R$ 0.01"<<endl;


    return 0;
}


