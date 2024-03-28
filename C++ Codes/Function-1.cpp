#include<iostream>
#include<conio.h>
using namespace std;
void addition(int a,int b);
int main()
{
    addition(10,90);
    addition(40,90);
    addition(0,0);
    addition(100,90);
}
void addition(int a,int b)
{
    int sum = a+b;
    cout<<"sum = "<<sum<<endl;
}
