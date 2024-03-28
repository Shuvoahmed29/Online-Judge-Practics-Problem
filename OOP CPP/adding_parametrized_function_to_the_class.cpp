#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int id;
    double gpa;
    void display()
    {
        cout << id << " " << gpa << endl;
    }
    void setValue(int x,double y){
        id=x;
        gpa=y;
    }
};
int main()
{
    student shuvo, tamim;
    shuvo.setValue(101,3.44);
    shuvo.display();

    tamim.setValue(120,3.90);
    tamim.display();
}