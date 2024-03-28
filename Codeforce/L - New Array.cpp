#include <bits/stdc++.h>

using namespace std;
void solve(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
}
int main()
{
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    solve(arr2, n);
    solve(arr1, n);
}