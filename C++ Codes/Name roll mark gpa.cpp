#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter Number of Student: ";
    int n;
    cin >> n;
    vector<int> roll;
    vector<int> mark, markcopy;
    string name[n];
    string grade[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Name of Student-" << (i + 1) << ": ";
        cin >> name[i];
        cout << "Roll of Student-" << (i + 1) << ": ";
        int x;
        cin >> x;
        roll.push_back(x);
        cout << "Mark of Student-" << (i + 1) << ": ";
        int y;
        cin >> y;
        mark.push_back(y);
        // Grading system:
        string str;
        if (y < 40)
            str = "F";
        else if (y >= 40 and y < 45)
            str = "D";
        else if (y >= 45 and y < 50)
            str = "C";
        else if (y >= 50 and y < 55)
            str = "C+";
        else if (y >= 55 and y < 60)
            str = "B-";
        else if (y >= 60 and y < 65)
            str = "B";
        else if (y >= 65 and y < 70)
            str = "B+";
        else if (y >= 70 and y < 75)
            str = "A-";
        else if (y >= 75 and y < 80)
            str = "A";
        else if (y >= 80 and y <= 100)
            str = "A+";
        else
        {
            cout << "Enter mark less than 100\n";
        }
        grade[i] = str;
    }

    cout << "ROLL       Name        Mark        Grade\n";
    for (int i = 0; i < n; i++)
    {
        cout << roll[i] << "     ";
        cout << name[i] << "       ";
        cout << mark[i] << "          ";
        cout << grade[i] << '\n';
    }
    cout << "After sorting according to mark" << '\n';
    markcopy = mark;
    sort(markcopy.begin(), markcopy.end());
    cout << "ROLL       Name        Mark        Grade\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (markcopy[i] == mark[j])
            {
                cout << roll[j] << "     ";
                cout << name[j] << "       ";
                cout << mark[j] << "          ";
                cout << grade[j] << '\n';
            }
        }
    }
}