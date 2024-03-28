#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,sum=0.00,p;
    int k=0;
    while(k<2)
    {
        cin>>n;
        if(n<0 || n>10.0)
        {
            cout<<"nota invalida"<<endl;
        }
        else
        {
            sum=sum+n;
            k++;
        }
    }
    p=sum/2.00;
    printf("media = %0.2f\n",sum/2);
    return 0;
}
