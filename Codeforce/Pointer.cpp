#include<iostream>

using namespace std;

int main()
{
    int number = 20;

    int *number_pointer = &number;

    cout << *number_pointer << endl;

    cout << number_pointer << endl;

    *number_pointer = 29;

    cout << number << endl;

    return 0;
}
