#include<iostream>
#include<conio.h>
using namespace std;
class person
{
public:
    string name;
    int age;
    void display1()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age :"<<age<<endl;

    }
};
class student : public person
{
public:
    int id;
    void display2()
    {
        cout<<"Id  :"<<id<<endl;
        display1();

    }
};
int main()
{
    student s1;
    s1.id=1011;
    s1.name="Shuvo Ahmed";
    s1.age=20;
    s1.display2();
    getch();
}
