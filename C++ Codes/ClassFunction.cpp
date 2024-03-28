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
};
int main()
{
    student Shuvo;
    Shuvo.id=200129;
    Shuvo.gpa=4.99;
    Shuvo.display();
    student Ruddro;
    Ruddro.id=200124;
    Ruddro.gpa=4.49;
    Ruddro.display();
    getch();
}
