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
    // person(string s, int x)
    // {
    //     name = s;
    //     age = x;
    // }
};
class shuvo:public person{
public:
    int id;  
    void display2(){
        display1();
        cout<<"ID: "<<id;
    }
    shuvo(string s,int x,int i){
        name=s;
        age=x;
        id=i;
    }
};
int main()
{
    // person s1("Shuvo ahmed", 21);
    // s1.name="Shuvo Ahmed";
    // s1.age=21;

    // shuvo s1;
    // s1.name="Shuvo Ahmed";
    // s1.age=21;
    // s1.id=200129;

    shuvo s1("Shuvo Ahmed",21,200129);
    s1.display2();
}