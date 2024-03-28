#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *link;
};
struct Node *insert_first(Node *head,int data){
    Node *newNode = new Node();
    newNode->data = data;
    newNode->link = head->link;
    head->link = newNode;
    return head;
};
void display(Node *head){
    Node *ptr = head->link;
    cout << "Link list is: ";
    while(ptr!=NULL){
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
    cout << endl;
}
int main(){
    Node *head = new Node();
    while(1){
        cout << "Enter I for insert.\n";
        cout << "Enter D for delete.\n";
        cout << "Enter any for exit.\n";
        cout << "Enter your choice: ";
        char ch;    cin >> ch;
        if(ch == 'i' || ch == 'I'){
            cout << "Enter F for insert first.\n";
            cout << "Enter L for insert last.\n";
            cout << "Enter C for insert custom.\n";
            cout << "Enter your choice: ";
            char c; cin >> c;
            if(c=='f'||c=='F'){
                cout << "Enter data to insert first: ";
                int data;   cin >> data;
                insert_first(head,data);
                display(head);
            }
        }

    }
}
