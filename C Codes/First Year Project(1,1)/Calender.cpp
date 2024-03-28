/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year,monthDays,weekDays=0;
    long long int firstDay=0;
    string month[]= {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int lastDay[]= {31,28,31,30,31,30,31,31,30,31,30,31};
    cout <<"ENTER A YEAR : ";
    cin >> year ;
    cout << endl << "HAPPY NEW YEAR BOSS!! " << year << endl;

    if((year%4==0 && year%100 !=0)|| year%400==0)
    {
        lastDay[1]=29;
    }

    firstDay=starting_day(year);

    for(int i=0; i<12; i++)
    {
        monthDays =lastDay[i];
        cout << endl << endl ;
        cout <<"***************"<< month[i] <<"***************"<< endl;
        cout << endl <<"  Sun  Mon  Tue  Wed  Thu  Fri  Sat  "<< endl;
        cout << "\n";
        for(int giving_space= 0; giving_space<firstDay; giving_space++)
        {
            cout << "     ";
        }
        for(int d=1; d<=monthDays; d++)
        {
            //cout <<"  "<< d << "  " ;
            printf("%5d",d);
            if(++weekDays>6)
            {
                cout << "\n\n" ;
                weekDays=0;
            }
            firstDay=weekDays;
        }

    }
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;
int starting_day (int year)
{
    int Month1stDay ;
    Month1stDay = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7 ;
    return Month1stDay ;
}
int main()
{
    int year,monthDays,weekDays=0;
    int firstDay=0;
    string month[]= {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int lastDay[]= {31,28,31,30,31,30,31,31,30,31,30,31};
    cout <<"enter a year : ";
    cin >> year ;
    cout << endl << "Happy New Year " << year << endl;
    if((year%4==0 && year%100 !=0)|| year%400==0)
    {
        lastDay[1]=29;
    }
    firstDay=starting_day(year);
    weekDays=firstDay;
    for(int i=0; i<12; i++)
    {
        monthDays =lastDay[i];
        cout << endl << endl ;
        cout <<"***************"<< month[i] <<"***************"<< endl;
        cout << endl <<"  Sun  Mon  Tue  Wed  Thu  Fri  Sat  "<< endl;
        cout << "\n";
        for(int giving_space= 0; giving_space<firstDay; giving_space++)
        {
            cout << "     ";
        }
        for(int d=1; d<=monthDays; d++)
        {
            //cout <<"  "<< d << "  " ;
            printf("%5d",d);
            if(++weekDays>6)
            {
                cout << "\n\n" ;
                weekDays=0;
            }
            firstDay=weekDays;
        }

    }
    //if((year%4 && year%100 !=0)|| year%400==0)


    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int starting_day (int year)
{
    int Month1stDay ;
    Month1stDay = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7 ;
    return Month1stDay ;
}
int main()
{
    system("color B9");
    int year,monthDays,weekDays=0;
    long long int firstDay=0;
    string month[]= {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int lastDay[]= {31,28,31,30,31,30,31,31,30,31,30,31};
    cout <<"enter a year : ";
    cin >> year ;
    cout << endl << "Happy New Year " << year << endl;
    if((year%4==0 && year%100 !=0)|| year%400==0)
    {
        lastDay[1]=29;
    }
    firstDay=starting_day(year);
    weekDays=firstDay;
    for(int i=0; i<12; i++)
    {
        monthDays =lastDay[i];
        cout << endl << endl ;
        cout <<"***************"<< month[i] <<"***************"<< endl;
        cout << endl <<"  Sun  Mon  Tue  Wed  Thu  Fri  Sat  "<< endl;
        cout << "\n";
        for(int giving_space= 0; giving_space<firstDay; giving_space++)
        {
            cout << "     ";
        }
        for(int d=1; d<=monthDays; d++)
        {
            //cout <<"  "<< d << "  " ;
            printf("%5d",d);
            if(++weekDays>6)
            {
                cout << "\n\n" ;
                weekDays=0;
            }
            firstDay=weekDays;
        }

    }
    //if((year%4 && year%100 !=0)|| year%400==0)


    return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
    int year,p,k,i,c,total,j,mc,dc,w,q,s,z=1,v,a;
    string month[]= {"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
    string week[]= {"SAT","SUN","MON","TUE","WED","THU","FRI"};
    cout <<"Enter a Year : ";
    cin >> year;
    cout<<endl<<endl;
    year=year-1900;
    a=year%4;
    k=year/4;
    for(j=0; j<12; j++)
    {
        if((a==0 && j==0) ||(a==0 && j==1))
        {
            k=k-1;
        }
        cout <<"***********"<<month[j]<<"***********"<< month[j] <<"***********"<<month[j]<<"***********"<< endl;
        if(j==0)
        {
            mc=1;
        }
        else if(j==1)
        {
            mc=4;
        }
        else if(j==2)
        {
            mc=4;
        }
        else if(j==3)
        {
            mc=0;
        }
        else if(j==4)
        {
            mc=2;
        }
        else if(j==5)
        {
            mc=5;
        }
        else if(j==6)
        {
            mc=0;
        }
        else if(j==7)
        {
            mc=3;
        }
        else if(j==8)
        {
            mc=6;
        }
        else if(j==9)
        {
            mc=1;
        }
        else if(j==10)
        {
            mc=4;
        }
        else if(j==11)
        {
            mc=6;
        }
        total=year+k+mc+1;
        c=total%7;
//Printing Days::::
        for(i=0; i<7; i++)
        {
            cout<<week[i]<<" ";
        }
        cout<<endl;
//Printing Date::::
//31 days.................................
        if(j==0 || j==2||j==4||j==6||j==7||j==9||j==11)
        {
            if(c==0)
            {
                for(p=1; p<=31; p++)
                {
                    cout<<p<<"   ";
                    if(p==7 || p==14 || p==21 || p==28)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==1)
            {
                cout<<"      ";
                for(p=1; p<=31; p++)
                {
                    cout<<p<<" ";
                    if(p==6 || p==13 || p==20 || p==27)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==2)
            {
                cout<<"  ";
                for(p=1; p<=31; p++)
                {
                    cout<<p<<" ";
                    if(p==5 || p==12 || p==19 || p==26)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==3)
            {
                cout<<"   ";
                for(p=1; p<=31; p++)
                {
                    cout<<p<<" ";
                    if(p==4||p==11||p==18||p==25)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==4)
            {
                cout<<"    ";
                for(p=1; p<=31; p++)
                {
                    cout<<p<<" ";
                    if(p==3||p==10||p==17||p==24)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==5)
            {
                cout<<"     ";
                for(p=1; p<=31; p++)
                {
                    cout<<p<<" ";
                    if(p==2||p==9||p==16||p==23||p==30)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
        }
//30 days.........................
        else if(j==3 || j==5||j==8||j==10)
        {
            if(c==0)
            {
                for(p=1; p<=30; p++)
                {
                    cout<<p<<" ";
                    if(p==7 || p==14 || p==21 || p==28)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==1)
            {
                cout<<" ";
                for(p=1; p<=30; p++)
                {
                    cout<<p<<" ";
                    if(p==6 || p==13 || p==20 || p==27)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==2)
            {
                cout<<"  ";
                for(p=1; p<=30; p++)
                {
                    cout<<p<<" ";
                    if(p==5 || p==12 || p==19 || p==26)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==3)
            {
                cout<<"   ";
                for(p=1; p<=30; p++)
                {
                    cout<<p<<" ";
                    if(p==4||p==11||p==18||p==25)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==4)
            {
                cout<<"    ";
                for(p=1; p<=30; p++)
                {
                    cout<<p<<" ";
                    if(p==3||p==10||p==17||p==24)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==5)
            {
                cout<<"     ";
                for(p=1; p<=30; p++)
                {
                    cout<<p<<" ";
                    if(p==2||p==9||p==16||p==23||p==30)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
        }

//29 days............................
        else if(j==1 && a==0)
        {
            if(c==0)
            {
                for(p=1; p<=29; p++)
                {
                    cout<<p<<" ";
                    if(p==7 || p==14 || p==21 || p==28)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==1)
            {
                cout<<" ";
                for(p=1; p<=29; p++)
                {
                    cout<<p<<" ";
                    if(p==6 || p==13 || p==20 || p==27)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==2)
            {
                cout<<"  ";
                for(p=1; p<=29; p++)
                {
                    cout<<p<<" ";
                    if(p==5 || p==12 || p==19 || p==26)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==3)
            {
                cout<<"   ";
                for(p=1; p<=29; p++)
                {
                    cout<<p<<" ";
                    if(p==4||p==11||p==18||p==25)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==4)
            {
                cout<<"    ";
                for(p=1; p<=29; p++)
                {
                    cout<<p<<" ";
                    if(p==3||p==10||p==17||p==24)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==5)
            {
                cout<<"     ";
                for(p=1; p<=29; p++)
                {
                    cout<<p<<" ";
                    if(p==2||p==9||p==16||p==23||p==30)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
        }
//28 days........................
        else if(j==1 && a!=0)
        {
            if(c==0)
            {
                for(p=1; p<=28; p++)
                {
                    cout<<p<<" ";
                    if(p==7 || p==14 || p==21 || p==28)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==1)
            {
                cout<<" ";
                for(p=1; p<=28; p++)
                {
                    cout<<p<<" ";
                    if(p==6 || p==13 || p==20 || p==27)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==2)
            {
                cout<<"  ";
                for(p=1; p<=28; p++)
                {
                    cout<<p<<" ";
                    if(p==5 || p==12 || p==19 || p==26)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==3)
            {
                cout<<"   ";
                for(p=1; p<=28; p++)
                {
                    cout<<p<<" ";
                    if(p==4||p==11||p==18||p==25)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==4)
            {
                cout<<"    ";
                for(p=1; p<=28; p++)
                {
                    cout<<p<<" ";
                    if(p==3||p==10||p==17||p==24)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==5)
            {
                cout<<"     ";
                for(p=1; p<=28; p++)
                {
                    cout<<p<<" ";
                    if(p==2||p==9||p==16||p==23||p==30)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
        }
    }
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int year,p,k,i,c,total,j,mc,dc,w,q,s,z=1,v,a;
    string month[]= {"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
    string week[]= {"SAT","SUN","MON","TUE","WED","THU","FRI"};
    cout <<"Enter a Year : ";
    cin >> year;
    cout<<endl<<endl;
    year=year-1900;
    p=year%4;
    k=year/4;
    for(j=0; j<12; j++)
    {
        if((p==0 && j==0) ||(p==0 && j==1))
        {
            k=k-1;
        }
        cout <<"***********"<<month[j]<<"***********"<< month[j] <<"***********"<<month[j]<<"***********"<< endl;
        if(j==0)
        {
            mc=1;
            dc=31;
        }
        else if(j==1)
        {
            mc=4;
            dc=28;
        }
        else if(j==2)
        {
            mc=4;
            dc=31;
        }
        else if(j==3)
        {
            mc=0;
            dc=30;
        }
        else if(j==4)
        {
            mc=2;
            dc=31;
        }
        else if(j==5)
        {
            mc=5;
            dc=30;
        }
        else if(j==6)
        {
            mc=0;
            dc=31;
        }
        else if(j==7)
        {
            mc=3;
            dc=31;
        }
        else if(j==8)
        {
            mc=6;
            dc=30;
        }
        else if(j==9)
        {
            mc=1;
            dc=31;
        }
        else if(j==10)
        {
            mc=4;
            dc=30;
        }
        else if(j==11)
        {
            mc=6;
            dc=31;
        }
        total=year+k+mc+1;
        c=total%7;
        v=c;
        if(c==0)
        {
            c=7;
        }
//Printing Date & Days::::
        for(i=0; i<7; i++)
        {
            cout<<week[i]<<" ";
            s=8-c;
            if(j==0 || j==2||j==4||j==6||j==7||j==9||j==11)
            {
                if(s==8)
                {
                    for(s=1; s<=31;)
                    {
                        cout<<s<<" ";
                        s=s+7;
                    }
                    cout<<endl;
                    c=6;
                }
                else
                {
                      for(q=8-c; q<=31;)
                    {

                        if(a<=6)
                        {
                            cout<<q<<" ";
                            a++;
                        }
                        else
                        {
                            cout<<" "<<q<<" ";
                        }
                        q=q+7;
                    }
                    c--;
                    cout<<endl;
                }
            }
            else if(j==3 || j==5||j==8||j==10)
            {
                if(s==8)
                {
                    for(s=1; s<=30;)
                    {
                        cout<<s<<" ";
                        s=s+7;
                    }
                    cout<<endl;
                    c=6;
                }
                else
                {
                    z=1;
                    a=v;
                    //cout<<"  ";
                    for(q=8-c; q<=30;)
                    {
                        if(a<=6)
                        {
                            cout<<q<<" ";
                            a++;
                        }
                        else
                        {
                            cout<<" "<<q<<" ";
                        }
                        q=q+7;
                    }
                    c--;
                    cout<<endl;
                }
            }
            else if(j==1 && p==0)
            {
                if(s==8)
                {
                    for(s=1; s<=29;)
                    {
                        cout<<s<<" ";
                        s=s+7;
                    }
                    cout<<endl;
                    c=6;
                }
                else
                {
                    z=1;
                    a=v;
                    //cout<<"  ";
                    for(q=8-c; q<=29;)
                    {
                         if(a<=6)
                        {
                            cout<<q<<" ";
                            a++;
                        }
                        else
                        {
                            cout<<" "<<q<<" ";
                        }
                        q=q+7;
                    }
                    c--;
                    cout<<endl;
                }
            }
            else if(j==1 && p!=0)
            {
                if(s==8)
                {
                    for(s=1; s<=28;)
                    {
                        cout<<s<<" ";
                        s=s+7;
                    }
                    cout<<endl;
                    c=6;
                }
                else
                {
                    z=1;
                    a=v;
                    //cout<<"  ";
                    for(q=8-c; q<=28;)
                    {
                         if(a<=6)
                        {
                            cout<<q<<" ";
                            a++;
                        }
                        else
                        {
                            cout<<" "<<q<<" ";
                        }
                        q=q+7;
                    }
                    c--;
                    cout<<endl;
                }
            }

        }
    }
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int year,p,k,i,c,total,j,mc,dc,w,q,s;
    string month[]= {"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
    string week[]= {"SAT","SUN","MON","TUE","WED","THU","FRI"};
    cout <<"Enter a Year : ";
    cin >> year;
    cout<<endl<<endl;
    year=year-1900;
    p=year%4;
    k=year/4;
    for(j=0; j<12; j++)
    {
        if((p==0 && j==0) ||(p==0 && j==1))
        {
            k=k-1;
        }
        cout <<"***************"<< month[j] <<"***************"<< endl;
        if(j==0)
        {
            mc=1;
            dc=31;
        }
        else if(j==1)
        {
            mc=4;
            dc=28;
        }
        else if(j==2)
        {
            mc=4;
            dc=31;
        }
        else if(j==3)
        {
            mc=0;
            dc=30;
        }
        else if(j==4)
        {
            mc=2;
            dc=31;
        }
        else if(j==5)
        {
            mc=5;
            dc=30;
        }
        else if(j==6)
        {
            mc=0;
            dc=31;
        }
        else if(j==7)
        {
            mc=3;
            dc=31;
        }
        else if(j==8)
        {
            mc=6;
            dc=30;
        }
        else if(j==9)
        {
            mc=1;
            dc=31;
        }
        else if(j==10)
        {
            mc=4;
            dc=30;
        }
        else if(j==11)
        {
            mc=6;
            dc=31;
        }
        total=year+k+mc+1;
        c=total%7;
        if(c==0)
        {
            c=7;
        }

        for(i=0; i<7; i++)
        {
            cout<<week[i]<<" ";
            s=8-c;

            if(j==0 || j==2||j==4||j==6||j==7||j==9||j==11)
            {
                if(s==8)
                {
                    for(s=1; s<=31;)
                    {
                        cout<<s<<" ";
                        s=s+7;
                    }
                    cout<<endl;
                    c=6;
                }
                else
                {
                    for(q=8-c; q<=31;)
                    {
                        cout<<q<<" ";
                        q=q+7;
                    }
                    c--;
                    cout<<endl;
                }
            }
            else if(j==3 || j==5||j==8||j==10)
            {
                if(s==8)
                {
                    for(s=1; s<=30;)
                    {
                        cout<<s<<" ";
                        s=s+7;
                    }
                    cout<<endl;
                    c=6;
                }
                else
                {
                    for(q=8-c; q<=30;)
                    {
                        cout<<q<<" ";
                        q=q+7;
                    }
                    c--;
                    cout<<endl;
                }
            }
            else if(j==1 && p==0)
            {
                if(s==8)
                {
                    for(s=1; s<=29;)
                    {
                        cout<<s<<" ";
                        s=s+7;
                    }
                    cout<<endl;
                    c=6;
                }
                else
                {
                    for(q=8-c; q<=29;)
                    {
                        cout<<q<<" ";
                        q=q+7;
                    }
                    c--;
                    cout<<endl;
                }
            }
            else if(j==1 && p!=0)
            {
                if(s==8)
                {
                    for(s=1; s<=28;)
                    {
                        cout<<s<<" ";
                        s=s+7;
                    }
                    cout<<endl;
                    c=6;
                }
                else
                {
                    for(q=8-c; q<=28;)
                    {
                        cout<<q<<" ";
                        q=q+7;
                    }
                    c--;
                    cout<<endl;
                }
            }

        }
    }
    return 0;
}*/
