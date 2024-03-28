#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    int id;
    double gpa;
    void result()
    {
       cout<<id<<"  "<<gpa<<endl;
    }
    void classValue(int x,double y)
    {
        id=x;
        gpa=y;
    }
};
int main()
{
    student Alim,Abdul;
    Alim.classValue(101,4.89);
    Abdul.classValue(102,4.33);
    Alim.result();
    Abdul.result();
    getch();
}
