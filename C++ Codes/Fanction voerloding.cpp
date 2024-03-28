#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    void display()
    {
        cout<<"I am a Student."<<endl;
    }

};
class teacher
{
public:
    void display()
    {
        cout<<"I am a teacher."<<endl;
    }

};
class people
{
public:
    void display()
    {
        cout<<"I am a people."<<endl;
    }

};
class actor
{
public:
    void display()
    {
        cout<<"I am a actor."<<endl;
    }

};
int main()
{
    student s1;
    s1.display();
    teacher s2;
    s2.display();
    people s3;
    s3.display();
    actor s4;
    s4.display();
    getch();
}
