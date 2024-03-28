#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int id;
    double gpa;
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Id: "<<id<<endl;
        cout<<"Gpa: "<<gpa<<endl;
    }
    // void setvalue(string Name, int Id, double Gpa){
    //     name=Name;
    //     id=Id;
    //     gpa=Gpa;
    // }
    // student(string Name, int Id, double Gpa){
    //     name=Name;
    //     id=Id;
    //     gpa=Gpa;
    // }
    student(string name, int id, double gpa)
    {
        this -> name=name;
        this -> id=id;
        this -> gpa=gpa;
    }
    // student(){
    //     cout<<"This is Default Constructor !\n";
    // }
};
int main()
{
    student s1("Shuvo Ahmed",200129,3.79);
    s1.display();
    // s1.name = "Shuvo Ahmed";
    // s1.id =200129;
    // s1.gpa =3.79;
    // s1.setvalue("Shuvo Ahmed",200129,3.79);

    // s2.setvalue("Raihanul Haque",1170,5.00);
    student s2("Raihanul Haque",1170,5.00);
    s2.display();
    //student st3;
}
