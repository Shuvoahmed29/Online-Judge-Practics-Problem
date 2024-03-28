#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "Enter any number of array: ";
    vector <int> vec;
    while(1){
        int x;  cin >> x;
        vec.push_back(x);
        if (getchar() == '\n'){
            cout << "Enter key is pressed" << '\n';
            break;
        }
    }
    if (getchar() == '\n'){
        system("cls");
        cout << "Array: ";
        for(auto it:vec) cout << it <<' ';
        cout << '\n';
        cout << "Menu: "<< '\n';
        cout << "1. Press I for insert\n";
        cout << "2. Press D for delete\n";
        cout << "3. Exit\n";
    }
}
