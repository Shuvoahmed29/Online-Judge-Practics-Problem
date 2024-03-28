#include<iostream>
#include<conio.h>
using namespace std;
void shuvo(int a,int b)
{
    int sum=a+b;
    cout<<sum<<endl;
}
void shuvo(int a,int b,int c)
{
    int sum=a+b+c;
    cout<<sum;
}
int main()
{
    int a=90,b=10;
    int x=100,y=19,z=1;
    shuvo(a,b);
    shuvo(x,y,z);
}
