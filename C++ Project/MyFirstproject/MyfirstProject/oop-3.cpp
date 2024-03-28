#include <iostream>
using namespace std;
class student
{
    int roll;
    float cgpa;
public:
//constructors
    student()
    {
    }
    student(int a,float b)
    {
        roll=a;
        cgpa=b;
    }
    float get_cgpa()
    {
        return cgpa;
    }
    void show()
    {
        cout <<roll <<"-" <<cgpa << endl;
    }
};
int main()
{
    student a[5],temp;
    int r;
    float g;
    for(int k=0; k<5; k++)
    {
        cin >> r >> g;
        a[k]=student(r,g);
    }
//sorting
    for(int k=0; k<4; k++)
    {
        if(a[k].get_cgpa()<a[k+1].get_cgpa())
        {
            temp=a[k];
            a[k]=a[k+1];
            a[k+1]=temp;
            k=-1;
        }
    }
    cout << "Merit-Roll-CGPA" <<endl;
    for(int k=1; k<6; k++)
    {
        cout<< k << "-";
        a[k-1].show();
    }
    return 0;
}
