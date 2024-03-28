#include <bits/stdc++.h>
using namespace std;
#include <string.h>
class book
{
    int page;
    double price;
    string s;

public:
    void setpage(int a)
    {
        page = a;
    }
    void setprice(double b)
    {
        price = b;
    }
    void setname(string p)
    {
        s = p;
    }
    int getpage()
    {
        return page;
    }
    int getprice()
    {
        return price;
    }
    string getname()
    {
        return s;
    }
};
int main()
{
    book b;
    b.setpage(200);
    b.setprice(670.78);
    b.setname("Bongobondhu Sekh");
    cout << "Page: " << b.getpage() << endl;
    cout << "Price: " << b.getprice() << endl;
    cout << "Name: " << b.getname() << endl;
}