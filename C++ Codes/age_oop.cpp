#include <bits/stdc++.h>
using namespace std;
class date
{
    int dd, mm, yy;

public:
    date()
    {
        dd = 1;
        mm = 1;
        yy = 2000;
    }
    void getdata()
    {
        cout << " (dd/mm/yy) :";
        cin >> dd >> mm >> yy;
    }
    void putdata()
    {
        cout << dd << " Days " << mm << " Months " << yy << " Years." << endl;
    }

    date cal(date &dob, date &pd)
    {
        date finl;
        int month[12] = {31, ((dob.yy % 4 == 0 && dob.yy % 100 != 0 || dob.yy % 400 == 0 || pd.yy % 4 == 0 && pd.yy % 100 != 0 || pd.yy % 400 == 0) ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (dob.dd <= pd.dd)
        {
            finl.dd = pd.dd - dob.dd;
        }
        else
        {
            pd.dd += month[pd.dd - 2];
            finl.dd = pd.dd - dob.dd;
            pd.mm -= 1;
        }
        if (pd.mm >= dob.mm)
        {
            finl.mm = pd.mm - dob.mm;
        }
        else
        {
            pd.mm += 12;
            finl.mm = pd.mm - dob.mm;
            pd.yy -= 1;
        }
        finl.yy = pd.yy - dob.yy;
        return finl;
    }
};
int main()
{
    date dob, pd, age;
    cout << "Enter your date of birth";
    dob.getdata();
    cout << "Enter present date:";
    pd.getdata();
    age = dob.cal(dob, pd);
    age.putdata();
}