#include <bits/stdc++.h>
using namespace std;
class Youtube
{
private:
    string ownername;
    // string name;
    int subscriber;

protected:
    string name;

public:
    Youtube(string name, string ownername)
    {
        this->name = name;
        this->ownername = ownername;
        subscriber = 0;
    }
    void subscribe()
    {
        subscriber++;
    }
    void unsubscribe()
    {
        if (subscriber > 1)
            subscriber--;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "OwnerName: " << ownername << endl;
        cout << "Subcriber: " << subscriber << endl;
    }
    virtual void function() = 0;
};
class Cooking : public Youtube
{
public:
    Cooking(string name, string ownername) : Youtube(name, ownername)
    {
    }
    void extra()
    {
        cout << name << " Very good Academy" << endl;
    }
    void function()
    {
        cout << "This Cooking YouTube Channel.\n";
    }
};
class Home : public Youtube
{
public:
    void function()
    {
        cout << "This Home YouTube Channel.\n";
    }
};
int main()
{
    // Youtube yt1("Udemy Academy","R.K. Demy");
    // yt1.subscribe();
    // yt1.subscribe();
    // yt1.unsubscribe();
    // yt1.display();

    Cooking yt2("Khan Academy", "K.H Khan");
    yt2.subscribe();
    yt2.subscribe();
    yt2.display();
    yt2.extra();

    Cooking yt3("Jabed Academy", "P.J. Jabed");
    yt3.subscribe();
    yt3.subscribe();
    yt3.subscribe();
    yt3.display();
    yt3.extra();
    Youtube *p = new Home();
    p->function();
}