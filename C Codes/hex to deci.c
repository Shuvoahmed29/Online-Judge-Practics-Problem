#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long long int decimal=0;
    char hexa[17];
    int i,len,value;
    printf("Hexadecimal = ");
    gets(hexa);
    len = strlen(hexa);
    len = len-1;
    for(i=0;hexa[i]!='\0';i++)
    {
        if(hexa[i]=='a' || hexa[i]=='A')
        {
            value = 10;
            break;
        }
       else if(hexa[i]=='b' || hexa[i]=='B')
        {
            value = 11;
        }
         else if(hexa[i]=='c' || hexa[i]=='C')
        {
            value = 12;
        } else if(hexa[i]=='d' || hexa[i]=='D')
        {
            value = 13;
        } else if(hexa[i]=='e' || hexa[i]=='E')
        {
            value = 14;
        } else if(hexa[i]=='f' || hexa[i]=='F')
        {
            value = 15;
        }
        else
        {
            value = hexa[i];
        }
        decimal = decimal + value*pow(16,len);
        len--;
    }
    printf("Decimal = %lld\n",decimal);
}
