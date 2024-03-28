#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    float num1,num2;
    cout<<"Enter two number :  ";
    cin>>num1>>num2;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);

    float sum = num1 + num2;
    cout<<setw(20)<<"The Sum is : "<<sum<<endl;

    //cout<<noshowpoint;
    float sub = num1 - num2;
    cout<<setw(20)<<"The Sub is <<setw(20): "<<sub<<endl;

    float mul = num1 * num2;
    cout<<setw(20)<<"The mul is : "<<mul<<endl;

   //float rem = num1 % num2;
    //cout<<"The rem is : "<<rem<<endl;

     double dev =(float) num1 / num2;
    cout<<setw(20)<<"The dev is : "<<dev<<endl;

}
