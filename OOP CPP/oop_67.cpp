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
};
int main()
{
    student shuvo, tamim;
    shuvo.id = 200129;
    shuvo.gpa = 3.75;
    shuvo.display();

    tamim.id = 200135;
    tamim.gpa = 4.75;
    tamim.display();
}