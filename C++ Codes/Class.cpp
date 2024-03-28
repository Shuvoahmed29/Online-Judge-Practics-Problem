#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    int id;
    double gpa;
};
int main()
{
    student Alim,Shuvo;
    Alim.id=101;
    Alim.gpa=4.89;
    cout<<Alim.id<<"   "<<Alim.gpa<<endl;

    Shuvo.id=102;
    Shuvo.gpa=4.99;
    cout<<Shuvo.id<<"   "<<Shuvo.gpa<<endl;
    getch();
}
