#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    char A[30],B[30],C[30];
    cout<<"Enter any Comment = ";
    gets(A);
    int len = strlen(A);
    cout<<"A String lenth is = "<<len<<endl<<endl;
    strcpy(B,A);
    cout<<"Coping String is = "<<B<<endl<<endl;
    cout<<"Enter any Comment = ";
    gets(C);
    int value = strcmp(A,C);
    if(value==0)
        cout<<"A & C are EQUAL string"<<endl<<endl;
    else
        cout<<"A & C are NOT-EQUAL string"<<endl<<endl;
    strupr(A);
    cout<<"The Upper String is = "<<A<<endl<<endl;
    strlwr(A);
    cout<<"The Lower String is = "<<A<<endl<<endl;
    strcat(A,C);
    cout<<"A + C = "<<A<<endl<<endl;
    getch();

}
