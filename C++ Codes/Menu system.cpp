#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "Enter any number of array: ";
    vector <int> vec, array;
    while(1){
        int x;  cin >> x;
        vec.push_back(x);
        if (getchar() == '\n'){
            cout << "Press Enter key.......\n";
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
        cout << "3. Press any key for exit\n";
        char ch;
        cin >> ch;
        if(ch == 'I' or ch == 'i'){
            system("cls");
            cout << "Enter Possition for insert element: ";
            int inert;  cin >> inert;
            array.clear();
            for(int i = 0; i < inert-1; i++){
                array.push_back(vec[i]);
            }
            cout << "Which element you want to insert: ";
            int k;  cin >> k;
            array.push_back(k);
            for(int i = inert-1; i < vec.size(); i++){
                array.push_back(vec[i]);
            }
            vec = array;
            system("cls");
            cout << "Array: ";
            for(auto it : vec) cout << it <<' ';
        }
        else if(ch == 'D' or ch == 'd'){
            system("cls");
            cout << "Enter Possition for delete element: ";
            int del;  cin >> del;
            array.clear();
            for(int i = 0; i < del-1; i++){
                array.push_back(vec[i]);
            }
            for(int i = del; i < vec.size(); i++){
                array.push_back(vec[i]);
            }
            vec = array;
            system("cls");
            cout << "Array: ";
            for(auto it : vec) cout << it <<' ';
        }
        else{
            system("cls");
            cout << "Array: ";
            for(auto it:vec) cout << it <<' ';
            cout << '\n';
        }
    }
}
