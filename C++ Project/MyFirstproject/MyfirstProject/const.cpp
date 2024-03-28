#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    const int adfee;
    const int exam;
    int id;
    student(int x,int y,int z)
    : adfee(x),exam(y)
    {
        cout<<adfee<<endl;
        cout<<exam<<endl;
        id=z;
        cout<<id<<endl;
    }
};
int main()
{
    student s1(15000,1234,1170);

}

