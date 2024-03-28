#include <bits/stdc++.h>
using namespace std;
/*-----------------SHUVO AHMED------------------------------*/
#define nl '\n'
typedef long long int ll;
#define sort(x) sort(x.begin(), x.end())
#define Reverse(x) reverse(x.begin(), x.end())

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define sq(x) (x) * (x)

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define pb push_back
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);
/*-----------------SHUVO AHMED--------------------------------*/
int main()
{
    cout << "Enter your date of birth(dd/mm/yy): ";
    ll arr1[3];
    cin >> arr1[0] >> arr1[1] >> arr1[2];
    cout << "Enter your present date(dd/mm/yy): ";
    ll arr2[3];
    cin >> arr2[0] >> arr2[1] >> arr2[2];
    ll dd, mm, yy;
    if (arr2[0] >= arr1[0])
        dd = arr2[0] - arr1[0];
    else
    {
        arr2[0] = arr2[0] + 30;
        arr2[1] = arr2[1] - 1;
        dd = arr2[0] - arr1[0];
    }
    if (arr2[1] >= arr1[1])
        mm = arr2[1] - arr1[1];
    else
    {
        arr2[1] += 12;
        arr2[2] = arr2[2] - 1;
        mm = arr2[1] - arr1[1];
    }
    yy = arr2[2] - arr1[2];
    cout << dd << " Days " << mm << " Months " << yy << " Years" << nl;
}