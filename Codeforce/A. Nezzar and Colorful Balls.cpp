#include <bits/stdc++.h>
using namespace std;
int mostFrequent(int arr[], int n)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;
    int max_count = 0, res = -1;
    for (auto i : hash) {
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
    }
 
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,cunt=0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        int p=mostFrequent(arr, n);
        for (int i = 0; i <n; i++){
            if(arr[i]==p)cunt++;
        }
        cout<<cunt<<"\n";
    }
    return 0;
}