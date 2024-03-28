#include<iostream>
#include<conio.h>
using namespace std;
class student
{
private:
    int id;
    int gpa;

public:
    void sets(int x,int y)
    {
        id=x;
        gpa=y;
    }

    int gett()
        {
            return id;

        }
    int getts()
        {
            return gpa;

        }
    };
    int main()
    {
        student s1;
        s1.sets(30,500);
        cout<<s1.gett()<<endl;
        cout<<s1.getts()<<endl;
        getch();
    }
