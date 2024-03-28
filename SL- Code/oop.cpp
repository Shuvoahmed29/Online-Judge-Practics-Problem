#include<bits/stdc++.h>
using namespace std;
class person{
private:
    string address;
protected:
    int salary;
public:
    string name;
    int age;
    int id;
    void set_name(){
        cout<<"Enter your name: ";
        cin>>name;
    }
    void set_address(){
        cout<<"Enter your address: ";
        cin>>address;
    }
    void set_age(){
        cout<<"Enter your age: ";
        cin>>age;
    }
    void set_salary(){
        cout<<"Enter your basic salary: ";
        cin>>salary;
    }
    void show(){
        cout<<"Name: "<<name<<'\n';
        cout<<"Address: "<<address<<'\n';
        cout<<"Age: "<<age<<'\n';
        cout<<"ID: "<<id<<'\n';
        cout<<"Salary: "<<salary<<'\n';
    }
};
class child:public person{
public:
    void set_id(){
        cout<<"Enter your id: ";
        cin>>id;
    }
};
int main(){
    child shuvo;
    shuvo.set_name();
    shuvo.set_address();
    shuvo.set_age();
    // child ch;
    shuvo.set_id();
    shuvo.salary();
    shuvo.show();
}