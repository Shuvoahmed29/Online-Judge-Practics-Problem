#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
};
Node *createNode(int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
Node *insertNode(Node *ptr,int data){
    if(ptr == NULL) ptr=createNode(data);
    else if(ptr->data >= data){
        ptr->left = insertNode(ptr->left,data);
    }
    else ptr->right = insertNode(ptr->right,data);
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
    cout << "Current Tree!!\n";
    cout << "\nPre-order Traversal: ";
    preOrder(root);
    cout << endl;

    cout << "\nIn-order Traversal: ";
    inOrder(root);
    cout << endl;

    cout << "\nPost-order Traversal: ";
    postOrder(root);
    cout << endl;
}
int main(){
    Node *root = NULL;
    while(1){
        system("cls");
        display(root);
        cout << "\nEnter I for insert.\n";
        cout << "Enter any exit.\n";
        cout << "Enter your choice: ";
        char ch;    cin >> ch;
        if(ch=='i' || ch=='I'){
            system("cls");
            display(root);
            cout << "Enter data for insert: ";
            int data;   cin >> data;
            root = insertNode(root,data);
        }
        else break;
    }
}
