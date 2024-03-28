#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
    string A = "Shuvo";
    string B = " Ahmed";
    string C;
    string D;
    D = B;
    cout<<"Copied String is = "<<D<<endl;
    C = A+B;
    cout<<"A + B = "<<C<<endl;
    int len = C.size();
    cout<<"C String length = "<<len<<endl;
    getch();
}
