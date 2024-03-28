//Implement Stack using Link list.
#include<bits/stdc++.h>
#include "windows.h"
using namespace std;
int cunt=0;
int Total_size = 10;
struct Node
{
    int data;
    Node *link;
};
Node *insert_data(Node *head,int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->link = head->link;
    head->link = newNode;
    return head;
}
Node *delete_data(Node *head)
{
    head->link = head->link->link;
    return head;
}
void display(Node *head)
{
    Node *ptr = head->link;
    if(cunt<=0) cout << "Stack is Empty!\n";
    else
    {
        cout << "Stack is: ";
        while(ptr!=NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->link;
        }
        cout << endl;
    }
}
int main()
{
    Node *head = new Node();
    while(1)
    {
        system("cls");
        display(head);
        cout << "Enter I for insert.\n";
        cout << "Enter D for delete.\n";
        cout << "Enter any for exit.\n";
        cout << "Enter your choice: ";
        char ch;
        cin >> ch;
        if(ch=='i' || ch=='I')
        {
            system("cls");
            display(head);
            if(Total_size>cunt)
            {
                cout << "Enter data for insert: ";
                int data;
                cin >> data;
                insert_data(head,data);
                cunt++;
            }
            else
            {
                cout << "Stack Over Flow!\n";
                Sleep(2000);
            }
        }
        else if(ch=='d'||ch=='D')
        {
            system("cls");
            display(head);
            if(cunt>0)
            {
                delete_data(head);
                cunt--;
            }
            else
            {
                cout << "Stack Under Flow!\n";
                Sleep(2000);
            }
        }
        else break;
    }
}
