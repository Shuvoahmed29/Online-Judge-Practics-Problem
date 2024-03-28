#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    void display()
    {
        cout <<"I am a Student." << endl;
    }
};
class person : public student
{
public:
    void display()
    {
        cout <<"I am a Person." << endl;
    }
};
class teacher : public person
{
public:
    void display()
    {
        cout <<"I am a Teacher." << endl;
    }
};
int main()
{
    teacher t;
    t.display();
    person p;
    p.display();
    student s;
    s.display();
}