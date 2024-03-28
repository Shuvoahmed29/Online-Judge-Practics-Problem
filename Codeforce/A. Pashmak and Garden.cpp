#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
 
    if ((x1 != x2 && y1 != y2) && abs(x1 - x2) !=abs(y1 - y2) )
    {
        cout << -1 << endl;
        return 0;
    }
    else if (x1 != x2 && y1 == y2)
    {
        int diff = abs(x1 - x2);
        cout << x1 << " " << y1 + diff << " " << x2 << " " << y2 + diff;
    }
    else if (x1 == x2 && y1 != y2)
    {
        int diff = abs(y2 - y1);
        cout << x1 + diff << " " << y1 << " " << x2 + diff << " " << y2;
    }
    else if (x1 != x2 && y1 != y2)
    {
        cout<<x1<<" "<< y2 << " "<< x2 <<" "<< y1;
    }
 
    return 0;
}