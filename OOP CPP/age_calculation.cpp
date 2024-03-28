#include <bits/stdc++.h>
using namespace std;
class age
{
    int dd, mm, yy;
    int getday()
    {
        int x;
        time_t t = time(0);
        tm *pt = gmtime(&t);
        int pd = pt->tm_mday;
        if (pd >= dd)
            x = pd - dd;
        else
        {
            x = pd + 30 - dd;
            mm += 1;
        }
        return x;
    }
    int getmonth()
    {
        int y;
        time_t t = time(0);
        tm *pt = gmtime(&t);
        int pm = pt->tm_mon + 1;
        if (pm >= mm)
            y = pm - mm;
        else
        {
            y = pm + 12 - mm;
            yy += 1;
        }
        return y;
    }
    int getyear()
    {
        int z;
        time_t t = time(0);
        tm *pt = gmtime(&t);
        int py = pt->tm_year + 1900;
        z = py - yy;
        return z;
    }

public:
    age(int a, int b, int c)
    {
        dd = a;
        mm = b;
        yy = c;
    }
    void ans()
    {
        cout << getday() << " Days " << getmonth() << " Month " << getyear() << " Year\n";
    }
};
int main()
{
    cout << "Enter your date of birth(DD/MM/YY) : ";
    int d, m, y;
    cin >> d >> m >> y;
    age shuvo(d, m, y);
    shuvo.ans();
}