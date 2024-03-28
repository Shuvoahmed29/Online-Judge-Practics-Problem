#include <bits/stdc++.h>
using namespace std;
class emply
{
    string n1, c1, p1;
    int jy1;
    int bd1, bm1, by1;
    int sl1;
    int cd1, cm1, cy1;

public:
    void set_name(string p)
    {
        n1 = p;
    }
    string get_name()
    {
        return n1;
    }
    void set_cmp(string l)
    {
        c1 = l;
    }
    string get_cmp()
    {
        return c1;
    }
    void set_post(string w)
    {
        p1 = w;
    }
    string get_post()
    {
        return p1;
    }
    void set_join(int x)
    {
        jy1 = x;
    }
    int get_join()
    {
        return jy1;
    }
    void set_dob(int a, int b, int c)
    {
        bd1 = a;
        bm1 = b;
        by1 = c;
    }
    void set_salary(int a)
    {
        sl1 = a;
    }
    int get_salary()
    {
        sl1 = sl1 + ((20 * sl1) / 100);
        return sl1;
    }
    void set_prsnt(int a, int b, int c)
    {
        cd1 = a;
        cm1 = b;
        cy1 = c;
    }
    int get_day()
    {
        if (cd1 >= bd1)
            return cd1 - bd1;
        else
        {
            return cd1 + 30 - bd1;
            cm1 -= 1;
        }
    }
    int get_month()
    {
        if (cm1 >= bm1)
            return cm1 - bm1;
        else
        {
            return cm1 + 12 - bm1;
            cy1 -= 1;
        }
    }
    int get_year()
    {
        return cy1 - by1;
    }
};
int main()
{
    string n, c, p;
    emply shuvo;
    cout << "Enter your Name: ";
    getline(cin, n);
    shuvo.set_name(n);
    cout << "Enter your Company Name: ";
    getline(cin, c);
    shuvo.set_cmp(c);
    cout << "Enter your post: ";
    getline(cin, p);
    shuvo.set_post(p);
    int jy;
    cout << "Enter your Joining year: ";
    cin >> jy;
    shuvo.set_join(jy);
    int sl;
    cout << "Basic Salary: ";
    cin >> sl;
    shuvo.set_salary(sl);
    int bd, bm, by;
    cout << "Birthday(DD/MM/YY) : ";
    cin >> bd >> bm >> by;
    shuvo.set_dob(bd, bm, by);

    time_t t = time(0);
    tm *ct = gmtime(&t);
    int cd = ct->tm_mday;
    int cm = ct->tm_mon + 1;
    int cy = ct->tm_year + 1900;
    shuvo.set_prsnt(cd, cm, cy);
    cout << endl
         << endl;
    cout << "Name: " << shuvo.get_name() << endl;
    cout << "Company Name: " << shuvo.get_cmp() << endl;
    cout << "Company Name: " << shuvo.get_post() << endl;
    cout << "Joining Date: " << shuvo.get_join() << endl;
    cout << "Total Salary: " << shuvo.get_salary() << endl;
    cout << "Age: " << shuvo.get_day() << " Day " << shuvo.get_month() << " Month " << shuvo.get_year() << " Year\n\n"
         << endl;
}