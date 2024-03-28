#include<iostream>
#include<conio.h>
using namespace std;
void add(int,int);
void sub(int,int);
void mult(int,int);
void div(int,int);
int main()
{
    add(10,10);
    sub(10,10);
    mult(10,10);
    div(10,10);
    cout<<"All function is Call"<<endl;
}
void add(int a,int b)
{
    int add = a+b;
    cout<<"Sum = "<<add<<endl;
}
void mult(int a,int b)
{
    int add = a*b;
    cout<<"Mult = "<<add<<endl;
}
void sub(int a,int b)
{
    int add = a-b;
    cout<<"Sub = "<<add<<endl;
}
void div(int a,int b)
{
    float add = (float)a/b;
    cout<<"div= "<<add<<endl;
}
