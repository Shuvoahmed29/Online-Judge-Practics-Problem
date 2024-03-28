#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string ballInfo;
        cin >> ballInfo;

        int overs_x = 0;
        double overs_y = 0.0;
        int runs = 0;
        int wickets = 0;

        for (int i = 0; i < ballInfo.size(); i++)
        {
            if (ballInfo[i] == 'W')
            {
                wickets++;
            }
            else
            {
                int run = ballInfo[i] - '0';
                runs += run;
            }
            overs_y += 0.1;
            if (overs_y >= 0.6)
            {
                overs_x += 1;
                overs_y = 0.0;
            }
        }

        cout << overs_x;
        if (overs_y > 0)
        {
            cout << "." << overs_y*10;
        }
        else
        {
            cout<<".0";
        }
        cout << " Over";
        if (overs_x > 1 || (overs_x == 1 && overs_y > 0))
        {
            cout << "s";
        }
        cout << " " << runs << " Run";
        if (runs > 1)
        {
            cout << "s";
        }
        cout << " " << wickets << " Wicket";
        if (wickets > 1)
        {
            cout << "s";
        }
        cout << "." <<endl;
    }

    return 0;
}
