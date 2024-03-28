#include<stdio.h>
#include<math.h>
#include<string.h>
#include<conio.h>
int main()
{
    long long int decimal=0,place;
    int i=0,len,value;
    char hexa[17];
     decimal = 0;
    place = 1;
    printf("Enter any hexadecimal Number : ");
    gets(hexa);
    len = strlen(hexa);
    len--;
    for(i=0;hexa[i]!='\0';i++)
    {

        if(hexa[i]>=0 && hexa[i]<=9)
        {
            value = hexa[i] - 48;
        }
        else if(hexa[i]>='a' && hexa[i]<='f')
        {
            value = hexa[i] - 97+10;
        }
        else if(hexa[i]>='A' && hexa[i]<='F')
        {
            value = hexa[i] - 65+10;
        }
        decimal = decimal + value*pow(16,len);
        len--;
    }
    printf("Decimal = %lld",decimal);
    getch();
}
