/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cout<<"ENTER A YEAR: ";
    cin>>year;
    cout<<endl;
    int Month1stDay ;
    Month1stDay = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7 ;
    string week[]= {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    for(int i=0;i<7;i++)
    {
        if(Month1stDay==i)
        {
            cout<<"This Year 1st Day is "<<week[i]<<endl;
        }
    }
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year,p,k,i,c,total,j,mc,dc,w,q,s,z=1,v,a;
    string month[]= {"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
    string week[]= {"Sat    Mon Tue Wed Thu Fri Sun"};
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
        cout << endl << endl ;
        cout <<"------------"<< month[j] <<"------------"<< endl;
        cout <<week[0]<< endl;
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
        cout<<endl;
        for(int space= 0; space<c-1; space++)
        {
            cout << "      ";
        }
//Printing Date::::
//31 days.................................
        if(j==0 || j==2||j==4||j==6||j==7||j==9||j==11)
        {
            if(c==0)
            {
                for(p=1; p<=31; p++)
                {
                    cout<<p<<"      ";
                    if(p==7 || p==14 || p==21 || p==28)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==1)
            {
                for(p=1; p<=31; p++)
                {
                    cout<<p<<"      ";
                    if(p==6 || p==13 || p==20 || p==27)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==2)
            {
                for(p=1; p<=31; p++)
                {
                    cout<<p<<"      ";
                    if(p==5 || p==12 || p==19 || p==26)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==3)
            {
                for(p=1; p<=31; p++)
                {
                    cout<<p<<"       ";
                    if(p==4||p==11||p==18||p==25)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==4)
            {
                for(p=1; p<=31; p++)
                {
                    cout<<p<<"    ";
                    if(p==3||p==10||p==17||p==24)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==5)
            {
                for(p=1; p<=31; p++)
                {
                   cout<<p<<"      ";
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
                    cout<<p<<"    ";
                    if(p==7 || p==14 || p==21 || p==28)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==1)
            {
                for(p=1; p<=30; p++)
                {
                    cout<<p<<"    ";
                    if(p==6 || p==13 || p==20 || p==27)
                    {
                        cout<<endl;
                    }
                }
                cout<<endl;
            }
            else if(c==2)
            {
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
}
