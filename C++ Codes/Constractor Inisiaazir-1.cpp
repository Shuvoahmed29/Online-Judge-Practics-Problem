#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    const int admissionFee;
    const int examFee;
    int id;
    student(int x,int y,int z)
    :admissionFee(x),examFee(y)
    {
        id=z;
        cout<<"AdmissionFee = "<<admissionFee<<endl;
        cout<<"ExamFee = "<<examFee<<endl;
        cout<<"Id = "<<id<<endl;
    }
};

int main()
{
   student ob(15000,7002,64738);


   getch();
}
