#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    public:
    int id;
    double gpa;
    void display()
    {
        cout<<id<<"   "<<gpa<<endl;
    }
    student(int x,double y)
    {
        id=x;
        gpa=y;
    }
    student()
    {
        cout<<"Default Constractor."<<endl;
    }
};
int main()
{
    student Alim(101,3.88);
    student Abdul(102,4.53);
    student ob;
    Alim.display();
    Abdul.display();

}
