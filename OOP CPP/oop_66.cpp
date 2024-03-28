#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int id;
    double gpa;
};
int main()
{
    student shuvo, tamim;
    shuvo.id = 200129;
    shuvo.gpa = 3.75;
    cout << shuvo.id << " " << shuvo.gpa << endl;
    tamim.id = 200135;
    tamim.gpa = 4.75;
    cout << tamim.id << " " << tamim.gpa << endl;
}