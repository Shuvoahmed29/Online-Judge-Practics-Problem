#include <bits/stdc++.h>
using namespace std;
int arr[1000001];
int main()
{
    int mx = 1000000;
    for (int i = 1; i <= mx; i++)
        arr[i] = -1;
    for (int i = 2; i <= mx; i++)
    {
        if (arr[i] == -1)
        {
            for (int j = i; j <= mx; j = j + i)
            {
                if (arr[j] == -1)
                    arr[j] = i;
            }
        }
    }
}