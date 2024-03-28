#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
};
Node *create_node(int data){
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
Node *insert_data(Node *ptr,int data){
    if(ptr == NULL) ptr = create_node(data);
    else if(ptr->data > data)
        ptr->left = insert_data(ptr->left,data);
    else ptr->right = insert_data(ptr->right,data);
    return ptr;
}
void preOrder(Node *ptr){
    if(ptr != NULL){
        cout << ptr->data << " ";
        preOrder(ptr->left);
        preOrder(ptr->right);
    }
}
void inOrder(Node *ptr){
    if(ptr != NULL){
        inOrder(ptr->left);
        cout << ptr->data << " ";
        inOrder(ptr->right);
    }
}
void postOrder(Node *ptr){
    if(ptr != NULL){
        postOrder(ptr->left);
        postOrder(ptr->right);
        cout << ptr->data << " ";
    }
}
void display(Node *root){
    cout << "PreOrder Traversal: ";
    preOrder(root);
    cout << endl;

    cout << "InOrder Traversal: ";
    inOrder(root);
    cout << endl;

    cout << "PostOrder Traversal: ";
    postOrder(root);
    cout << endl;
}
int main(){
    Node *root = NULL;
    while(1){
        system("cls");
        display(root);
        cout << "\nEnter I for insert!\n";
        cout << "Enter any for exit!\n";
        cout << "Enter your choice: ";
        char ch;    cin >> ch;
        if(ch == 'i' || ch == 'I'){
            system("cls");
            display(root);
            cout << "\nEnter data for insert: ";
            int data;   cin >> data;
            root=insert_data(root,data);
        }
        else break;
    }
}
