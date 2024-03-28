#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,j,mult;
    cout<<"Enter any Number :  ";
    cin>>n;

        for(j=1;j<=10;j++)
        {
            mult = n*j;
            cout<<j<<" "<<"x"<<" "<<n<<" "<<"="<<" "<< mult<<endl;
        }
        getch();

}
