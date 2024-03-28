#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    long long int t;
    cin>>t;
    long long int p[t],i;
    double sum=0.0;
    for(i=0;i<t;i++)
    {
        cin>>p[i];
        sum=sum+p[i];
    }
    double avg;
    avg=sum/t;
    printf("%0.12lf\n",avg);
    return 0;
}
