#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long int ll;
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Shuvo cout.tie(NULL);
ll p = 1, run1 = 0, wicket = 0;
ll p2 = 1, run2 = 0, wicket2 = 0;
class cricket1
{
public:
    vector<ll> ball;
    cricket1(ll t)
    {
        ball.push_back(t);
    }
    virtual void display()
    {
        for (auto it : ball)
        {
            if (wicket < 4)
            {
                if (it <= 6 && p == 1)
                {
                    cout << "1st"
                         << " ball- ",
                        p++;
                    if (it >= 0)
                    {
                        cout << "valid ball-   ", run1 += it;
                        cout << "Run = " << it << nl;
                    }
                    else
                    {
                        cout << "invalid ball- ", run1 += 1;
                        cout << "Run = " << 1 << nl;
                    }
                    cout << "Run:" << run1 << " Wicket:" << wicket << " Ball:" << p - 1 << nl << nl;
                }
                else if (it <= 6 && p == 2)
                {
                    cout << "2nd"
                         << " ball- ",
                        p++;
                    if (it >= 0)
                    {
                        cout << "valid ball-   ", run1 += it;
                        cout << "Run = " << it << nl;
                    }
                    else
                    {
                        cout << "invalid ball- ", run1 += 1;
                        cout << "Run = " << 1 << nl;
                    }
                    cout << "Run:" << run1 << " Wicket:" << wicket << " Ball:" << p - 1 << nl << nl;
                }
                else if (it <= 6 && p == 3)
                {
                    cout << "3rd"
                         << " ball- ",
                        p++;
                    if (it >= 0)
                    {
                        cout << "valid ball-   ", run1 += it;
                        cout << "Run = " << it << nl;
                    }
                    else
                    {
                        cout << "invalid ball- ", run1 += 1;
                        cout << "Run = " << 1 << nl;
                    }
                    cout << "Run:" << run1 << " Wicket:" << wicket << " Ball:" << p - 1 << nl << nl;
                }
                else if (it <= 6 && p > 3)
                {
                    cout << p << "th ball- ", p++;
                    if (it >= 0)
                    {
                        cout << "valid ball-   ", run1 += it;
                        cout << "Run = " << it << nl;
                    }
                    else
                    {
                        cout << "invalid ball- ", run1 += 1;
                        cout << "Run = " << 1 << nl;
                    }
                    cout << "Run:" << run1 << " Wicket:" << wicket << " Ball:" << p - 1 << nl << nl;
                }
                else if (it > 6)
                {
                    if (p == 1)
                        cout << "1st"
                             << " ball- ",
                            p++;
                    else if (p == 2)
                        cout << "2nd"
                             << " ball- ",
                            p++;
                    else if (p == 3)
                        cout << "3rd"
                             << " ball- ",
                            p++;
                    else
                        cout << p << "th ball- ", p++;
                    cout << "valid ball-   ", run1 += 0;
                    cout << "Wicket = 1\n";
                    wicket++;
                    cout << "Run:" << run1 << " Wicket:" << wicket << " Ball:" << p - 1 << nl << nl;
                }
                else
                {
                    cout << p << "th ball- ", p++;
                    cout << "Invalid ball- Run = 0\n";
                    cout << "Run:" << run1 << " Wicket:" << wicket << " Ball:" << p - 1 << nl << nl;
                }
            }
            else
            {
                cout << "There are no more players.\n", p++;
                cout << "Run:" << run1 << " Wicket:" << wicket << " Ball:" << p - 1 << nl << nl;
                break;
            }
        }
    }
};
class cricket2
{
public:
    vector<ll> ball;
    cricket2(ll t)
    {
        ball.push_back(t);
    }
    virtual void display2()
    {
        for (auto it : ball)
        {
            if (wicket2 < 4)
            {
                if (it <= 6 && p2 == 1)
                {
                    cout << "1st"
                         << " ball- ",
                        p2++;
                    if (it >= 0)
                    {
                        cout << "valid ball-   ", run2 += it;
                        cout << "Run = " << it << nl;
                    }
                    else
                    {
                        cout << "invalid ball- ", run2 += 1;
                        cout << "Run = " << 1 << nl;
                    }
                    cout << "Run:" << run2 << " Wicket:" << wicket2 << " Ball:" << p2 - 1 << nl << nl;
                }
                else if (it <= 6 && p2 == 2)
                {
                    cout << "2nd"
                         << " ball- ",
                        p2++;
                    if (it >= 0)
                    {
                        cout << "valid ball-   ", run2 += it;
                        cout << "Run = " << it << nl;
                    }
                    else
                    {
                        cout << "invalid ball- ", run2 += 1;
                        cout << "Run = " << 1 << nl;
                    }
                    cout << "Run:" << run2 << " Wicket:" << wicket2 << " Ball:" << p2 - 1 << nl << nl;
                }
                else if (it <= 6 && p2 == 3)
                {
                    cout << "3rd"
                         << " ball- ",
                        p2++;
                    if (it >= 0)
                    {
                        cout << "valid ball-   ", run2 += it;
                        cout << "Run = " << it << nl;
                    }
                    else
                    {
                        cout << "invalid ball- ", run2 += 1;
                        cout << "Run = " << 1 << nl;
                    }
                    cout << "Run:" << run2 << " Wicket:" << wicket2 << " Ball:" << p2 - 1 << nl << nl;
                }
                else if (it <= 6 && p2 > 3)
                {
                    cout << p2 << "th ball- ", p2++;
                    if (it >= 0)
                    {
                        cout << "valid ball-   ", run2 += it;
                        cout << "Run = " << it << nl;
                    }
                    else
                    {
                        cout << "invalid ball- ", run2 += 1;
                        cout << "Run = " << 1 << nl;
                    }
                    cout << "Run:" << run2 << " Wicket:" << wicket2 << " Ball:" << p2 - 1 << nl << nl;
                }
                else if (it > 6)
                {
                    if (p2 == 1)
                        cout << "1st"
                             << " ball- ",
                            p2++;
                    else if (p2 == 2)
                        cout << "2nd"
                             << " ball- ",
                            p2++;
                    else if (p2 == 3)
                        cout << "3rd"
                             << " ball- ",
                            p2++;
                    else
                        cout << p2 << "th ball- ", p2++;
                    cout << "valid ball-   ", run2 += 0;
                    cout << "Wicket = 1\n";
                    wicket2++;
                    cout << "Run:" << run2 << " Wicket:" << wicket2 << " Ball:" << p2 - 1 << nl << nl;
                }
                else
                {
                    cout << p2 << "th ball- ", p2++;
                    cout << "Invalid ball- Run = 0\n";
                    cout << "Run:" << run2 << " Wicket:" << wicket2 << " Ball:" << p2 - 1 << nl << nl;
                }
            }
            else
            {
                cout << "There are no more players.\n", p2++;
                cout << "Run:" << run2 << " Wicket:" << wicket2 << " Ball:" << p2 - 1 << nl << nl;
                break;
            }
        }
    }
};
int main()
{

    cout << "Bangladesh v/s India Cricket Match\n";
    cout << "This match is 12 ball and 5 wicket match.\n";
    cout << "Valid Run(0<=x<=6),No/wide ball(x<0) and witcket(x>6)\n";

    cout << "Input 12 ball Run for Bangladesh\n";
    for (ll i = 1; i <= 12; i++)
    {
        ll x;
        cin >> x;
        cricket1 b(x);
        b.display();
        while (x < 0)
        {
            cout << "Wrong ball, again ball plz." << nl;
            cin >> x;
            cricket1 b(x);
            b.display();
        }
    }
    cout << "Input 12 ball Run for India\n";
    for (ll i = 1; i <= 12; i++)
    {
        ll x;
        cin >> x;
        cricket2 b2(x);
        b2.display2();
        while (x < 0)
        {
            cout << "Wrong ball, again ball plz." << nl;
            cin >> x;
            cricket2 b2(x);
            b2.display2();
        }
    }
    if (run1 > run2)
        cout << "Bangladesh Won the game.\n\n";
    else if (run2 > run1)
        cout << "India Won the game.\n\n";
    else
        cout << "Match is draw\n\n";
    Code By Shuvo
}