#include<iostream>
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
}
