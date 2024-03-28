#include <bits/stdc++.h>
using namespace std;
class test
{
public:
    string name;
    int id;
    test(string name, int id)
    {
        this->name = name;
        this->id = id;
    }
    bool operator==(const test &T) const
    {
        return this->name == T.name;
    }
};
ostream &operator<<(ostream &COUT, test &c)
{
    COUT << "Name: " << c.name << endl;
    COUT << "ID: " << c.id << endl;
    return COUT;
}
class collection
{
public:
    list<test> mylist;
    void operator+=(test &yt)
    {
        this->mylist.push_back(yt);
    }
    void operator-=(test &yt)
    {
        this->mylist.remove(yt);
    }
};
ostream &operator<<(ostream &COUT, collection &C)
{
    for (test it : C.mylist)
        COUT << it;
    return COUT;
}
int main()
{
    test t1("Shuvo vai", 200129), t2("Shuvo", 1170);
    // cout<<t1<<t2;
    collection c;
    c += t1;
    c += t2;
    c -= t2;
    cout << c;
}
