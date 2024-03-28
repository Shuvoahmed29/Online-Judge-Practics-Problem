#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *link;
};
Node *insert_first(Node *head,int data){
    Node *newNode = new Node();
    newNode->data = data;
    newNode->link = head->link;
    head->link = newNode;
    return head;
}
Node *insert_last(Node *head,int data){
    Node *newNode = new Node();
    newNode->data = data;
    Node *ptr = head;
    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = newNode;
    newNode->link = NULL;
    return head;
}
Node *insert_custom(Node *head,int data,int index){
    Node *newNode = new Node();
    newNode->data = data;
    Node *ptr = head;
    for(int i=0;i<index-1;i++){
        ptr = ptr->link;
    }
    newNode->link = ptr->link;
    ptr->link = newNode;
    return head;
}
Node *delete_first(Node *head){
    head->link = head->link->link;
    return head;
}
Node *delete_last(Node *head){
    Node *ptr = head;
    while(ptr->link->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = NULL;
    return head;
}
Node *delete_custom(Node *head,int index){
    Node *ptr = head;
    for(int i=0;i<index-1;i++){
        ptr = ptr->link;
    }
    ptr->link = ptr->link->link;
    return head;
}
void display(Node *head){
    cout << "Current Link List: ";
    Node *ptr = head->link;
    while(ptr!=NULL){
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
    cout << endl;
}
int main(){
    Node *head = new Node();
    while(1){
        system("cls");
        display(head);
        cout << "Enter I for insert.\n";
        cout << "Enter D for delete.\n";
        cout << "Enter any for exit.\n";
        cout << "Enter your choice: ";
        char ch;    cin >> ch;
        if(ch=='i' || ch=='I'){
            system("cls");
            display(head);
            cout << "Enter F for insert first.\n";
            cout << "Enter L for insert last.\n";
            cout << "Enter C for insert custom.\n";
            cout << "Enter your choice: ";
            char c; cin >> c;
            if(c=='f' || c=='F'){
                system("cls");
                display(head);
                cout << "Enter data for insert first: ";
                int data;   cin >> data;
                insert_first(head,data);
            }
            else if(c=='l' || c=='L'){
                system("cls");
                display(head);
                cout << "Enter data for insert last: ";
                int data;   cin >> data;
                insert_last(head,data);
            }
            else if(c=='c' || c=='C'){
                system("cls");
                display(head);
                cout << "Enter data for insert custom: ";
                int data;   cin >> data;
                cout <<"Enter index for insert: ";
                int index; cin >> index;
                insert_custom(head,data,index);
            }
            else{
                cout << "Invalid Input!\n";
                continue;
            }
        }
        else if(ch=='d' || ch=='D'){
            system("cls");
            display(head);
            cout << "Enter F for delete first.\n";
            cout << "Enter L for delete last.\n";
            cout << "Enter C for delete custom.\n";
            cout << "Enter your choice: ";
            char c; cin >> c;
            if(c=='f' || c=='F'){
                delete_first(head);
            }
            else if(c=='l' || c=='L'){
                delete_last(head);
            }
            else if(c=='c' || c=='C'){
                system("cls");
                display(head);
                cout << "Enter index for delete: ";
                int index;  cin >> index;
                delete_custom(head,index);
            }
            else{
                cout << "Invalid Input\n";
                continue;
            }
        }
        else break;
    }
}
