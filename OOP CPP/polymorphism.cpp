#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    virtual void display()
    {
        cout << "I am a Student." << endl;
    }
};
class person : public student
{
public:
    void display()
    {
        cout << "I am a Person." << endl;
    }
};
class teacher : public person
{
public:
    void display()
    {
        cout << "I am a Teacher." << endl;
    }
};
int main()
{
    teacher t;
    person p;
    student *s;
    s = &t;
    s->display();
    s = &p;
    s->display();
}