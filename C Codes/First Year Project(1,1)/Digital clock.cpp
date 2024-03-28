
/*#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    int sec_prev=0;
    while(1)
    {
        int seconds, minutes, hours;
        string str;

        //storing total seconds
        time_t total_seconds=time(0);

        //getting values of seconds, minutes and hours
        struct tm* ct=localtime(&total_seconds);

        seconds=ct->tm_sec;
        minutes=ct->tm_min;
        hours=ct->tm_hour;

        //converting it into 12 hour format
        if(hours>=12)
            str="PM";
        else
            str="AM";
        hours=hours>12?hours-12:hours;


        //printing the result
        if(seconds==sec_prev+1 || (sec_prev==59 && seconds==0))
        {
            system("CLS");
            cout<< (hours<10?"0":"") << hours <<":" << (minutes<10?"0":"") << minutes << ":" << (seconds<10?"0":"") << seconds << " " << str <<endl;
        }

        sec_prev=seconds;

    }

    return 0;
}*/
#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int hour,minute,second;
    cout<<"Please enter a time format in HH:MM:SS: ";
    cin>>hour>>minute>>second;
start:
    for(hour; hour<24; hour++)
    {
        for(minute; minute<60; minute++)
        {
            for(second; second<60; second++)
            {
                clrscr();
                printf("\n\n\t\t\t%d:%d:%d",hour,minute,second);
                if(hour<12)
                {
                    printf(" AM");
                }
                else
                {
                    printf(" PM");
                }
                printf("\n\n\t\t\tSunday 18 Nov 2018");
                for(double i=0; i<3619999; i++)
                    i++;
                    i--;
            }
            second=0;
        }
        minute=0;
    }
    hour=0;
    goto start;
    return 0;
}
/*#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
int main()
{
	int h=0,m=0,s=0;
	clrscr();
	printf("Please enter a time format in HH:MM:SS: ");
	scanf("%d%d%d",&h,&m,&s);
	start:
	for(h;h<24;h++)
	{
		for(m;m<60;m++)
		{
			for(s;s<60;s++)
			{
				clrscr();
				printf("\n\n\t\t\t%d:%d:%d",h,m,s);
				if(h<12)
				{
					printf(" AM");
				}
				else
				{
					printf(" PM");
				}
				printf("\n\n\t\t\tSunday 18 Nov 2018");
				for(double i=0;i<3619999;i++)
				i++;
				i--;
			}
			s=0;
		}
		m=0;
	}
	h=0;
	goto start;
getch();
}*/
