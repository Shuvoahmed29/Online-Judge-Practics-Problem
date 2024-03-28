#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    void display()
    {
        cout << "Name: " << name << endl;
    }
};
class person : public student
{
public:
    int age;
    void display1()
    {
        display();
        cout << "Age: " << age << endl;
    }
    person(string s, int x)
    {
        name = s;
        age = x;
    }
};
int main()
{
    person s1("Shuvo ahmed", 21);
    // s1.name="Shuvo Ahmed";
    // s1.age=21;
    s1.display1();
}