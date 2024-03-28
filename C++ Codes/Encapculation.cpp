#include<iostream>
#include<conio.h>
using namespace std;
class student
{
private:
    string name;
public:
    void setName(string name)
    {
       this -> name=name;
    }
     string getName()
    {
       return name;
    }
};
int main()
{
    student id;
    id.setName("Shuvo");
    cout<<id.getName();
    getch();
}
