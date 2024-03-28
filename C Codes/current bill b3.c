
#include<stdio.h>
int main()
{
    double unit,total_bill;
    printf("Enter your used unit:  ");
    scanf("%lf",&unit);
    if(unit>=50)
    {
        total_bill=unit*3.50;
        printf("Total bill is %0.2lf",total_bill);

    }
    else if(unit>50&&unit<=75)
    {
        total_bill=unit*4.00;
        printf("Total bill is %0.2lf",total_bill);
    }
    else if(unit>75&&unit<=200)
        {
        total_bill=unit*5.45;
    printf("Total bill is %0.2lf",total_bill);
        }
    else if(unit>201&&unit<=300)
    {
        total_bill=unit*5.70;
        printf("Total bill is %0.2lf",total_bill);
    }
    else if(unit>301&&unit<=400)
    {
        total_bill=unit*6.02;
        printf("Total bill is %0.2lf",total_bill);
    }
    else if(unit>401&&unit<=600)
    {
        total_bill=unit*9.30;
        printf("Total bill is %0.2lf",total_bill);
    }
    else if(unit>600)
    {
        total_bill=unit*10.70;
        printf("Total bill is %0.2lf",total_bill);
    }

    return 0;
}
