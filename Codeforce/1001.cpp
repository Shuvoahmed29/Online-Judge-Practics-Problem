#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a,b;
    cin >> n;
    while(n--)
    {
        b = 0;
        cin >> a;
        if(a > 10)
            b = a-10;
        cout << b << " " << a-b << '\n';
    }
    return 0;
}
