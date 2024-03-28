#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n1=60,n2=10;
    int *p1,*p2;
    p1=&n1;
    p2=&n2;
    int sum = *p1 + *p2;
    cout<<sum<<endl;
}
