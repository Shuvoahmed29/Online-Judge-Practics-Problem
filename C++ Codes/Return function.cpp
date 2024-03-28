#include<iostream>
#include<conio.h>
using namespace std;
int display(int,int);
int main()
{

    int result = display(90,10);

    cout<<"The Sum is = "<<result;
    getch();

}
int display(int a,int b)
{

    int sum;
    sum=a+b;
    return sum;
}
