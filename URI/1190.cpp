#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double M[12][12],sum=0.0;
    char O[2];
    cin>>O;
    int n=11,o=6,i,j;
    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 12; j++)
        {
            cin>>M[i][j];
            if(j > n)
                sum += M[i][j];
        }
        n--;
    }
    for(i = 6; i < 12; i++)
    {
        for(j = 0; j < 12; j++)
        {
            cin>>M[i][j];
            if(j > o)
                sum += M[i][j];
        }
        o++;
    }
    if (O[0]=='S')
    {cout<<fixed;
        cout<<setprecision(1)<<sum<<endl;}
    else
    {cout<<fixed;
    cout<<setprecision(1)<<sum/30.0<<endl;}
    return 0;
}
