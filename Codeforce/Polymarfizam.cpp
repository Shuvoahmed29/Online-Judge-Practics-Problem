#include<iostream>
#include<conio.h>
using namespace std;
class person
{
public:
    virtual void display()
    {
        cout<<"I am a person"<<endl;
    }
};
class teacher:public person
{
public:
    void display()
    {
        cout<<"I am a teacher"<<endl;
    }
};
class student:public person
{
public:
    void display()
    {
        cout<<"I am a student"<<endl;
    }
};

int main()
{
    person *p;
    teacher t;
    student s;
    //p->display();
    p=&s;
    p->display();
    p=&t;
    p->display();
    getch();
}
