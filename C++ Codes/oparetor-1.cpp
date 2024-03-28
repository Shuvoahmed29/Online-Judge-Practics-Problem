#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=20;
    int b=30;
    int sum;
    float d;
    double e;
    char ch;
    char u[20];
    int w = sizeof(u);
    cout<<w<<endl;
    sum=(a=20,b=40,sum=a+b);
    cout<<sum<<endl;
}
