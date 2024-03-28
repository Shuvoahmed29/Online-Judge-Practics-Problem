#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Main String: ";
    string main;
    cin >> main;

    cout << "Sub String: ";
    string sub;
    cin >> sub;

    vector<int> vec(sub.size(), 0);
    int i = 0, j = 1;
    while (j < sub.size())
    {
        if (sub[i] == sub[j])
        {
            i++;
            vec[j] = i;
            j++;
        }
        else if (i == 0)
            j++;
        else
            i = vec[i - 1];
    }

    i = j = 0;
    int cunt = 0;
    while (j < main.size())
    {
        if (sub[i] == main[j])
        {
            i++;
            j++;
        }
        else if (i == 0)
            j++;
        else
            i = vec[i - 1];
        if (i == sub.size())
        {
            cunt++;
            i = vec[i - 1];
        }
    }

    cout << "Number of sub string: " << cunt << endl;
}