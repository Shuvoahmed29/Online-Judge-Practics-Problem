#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int decimal=0,i,k=0;
    char hexadecimal[20];
    printf("Enter any Hexadecimal Number :  ");
    scanf("%s",&hexadecimal);
    strupr(hexadecimal);
    for(i=strlen(hexadecimal)-1;i>=0;i--)
    {
        if(isupper(hexadecimal[i]))
            decimal = decimal + (hexadecimal[i]-55)*pow(16,k);
        else
            decimal = decimal + (hexadecimal[i]-48)*pow(16,k);
        k++;
    }
    printf("Decimal = %d",decimal);
}
