#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int showMenu(){
    cout << "Choice Menu!\n";
    cout << "Enter 1 for insert(name,type): ";
    cout << "Enter 2 for update(name,old type,new type): ";
    cout << "Enter 3 for search(name,type): ";
    cout << "Enter 4 for delete(name,type): ";
    cout << "Enter 5 for display symbol table: ";

    cout << "Enter your choice: ";
    int choice; cin >> choice;
    return choice;
}
int main(){
    code();
    int choice = showMenu();
}
