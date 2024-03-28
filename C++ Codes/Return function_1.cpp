#include<iostream>
#include<conio.h>
using  namespace std;
int addition(int ,int );
int main()
{
    cout<<addition(100,20)<<endl;
    cout<<addition(10,20)<<endl;
    cout<<addition(110,20)<<endl;

    getch();
}
int addition(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
