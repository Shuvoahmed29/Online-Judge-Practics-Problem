//5.Insertion Sort.
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "Array element number: ";
    int n;  cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}