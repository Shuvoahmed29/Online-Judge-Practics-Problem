#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
int main()
{
    while(1)
    {
        int guess;
        cout<<"You guess a Number 1 to 5 : ";
        cin>>guess;
        int ran = rand()%5 +1;
        if(guess==ran)
        {
            cout<<"You Won";
        }
        else
        {
            cout<<"You have lost. Try again."<<endl;
            cout<<"RandomNumber was = "<<rand;
        }

    }
    getch();
}
