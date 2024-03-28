#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("color C0");
    int year,monthday,weekDay=0;
    string month[]= {"January","February","March","April","May","June","July","August","September","October","November","December"};
    string week[]= {"  Sun  Mon  Tue  Wed  Thu  Fri  Sat  "};
    int lastDay[]= {31,28,31,30,31,30,31,31,30,31,30,31};
    cout<<"ENTER A YEAR: ";
    cin>>year;
    cout<<endl;
    cout<<"HAPPY NEW YEAR "<<year<<" BOSS!!";
    if((year%4==0 && year%100 !=0)|| year%400==0)
    {
        lastDay[1]=29;
    }

    int Month1stDay = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7 ;

    int firstDay=Month1stDay;
    weekDay=firstDay;

    for(int i=0; i<12; i++)
    {
        monthday =lastDay[i];
        cout << endl << endl ;
        cout <<"------------"<< month[i] <<"------------"<< endl;
        cout << endl <<week[0]<< endl;
        for(int space= 0; space<firstDay; space++)
        {
            cout << "     ";
        }
        for(int day=1; day<=monthday; day++)
        {
            printf("%5d",day);
            if(++weekDay>6)
            {
                cout << "\n\n" ;
                weekDay=0;
            }
            firstDay=weekDay;
        }
    }
    return 0;

}

