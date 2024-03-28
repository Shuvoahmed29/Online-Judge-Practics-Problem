#include<stdio.h>
int main()
{
    int decimal,i=0,n,r;
    char hexadecimal[100];
    printf("Enter any Decimal Number :  ");
    scanf("%d",&decimal);
    n = decimal;
    while(decimal!=0)
    {
        r = decimal%16;
        if(r<10)
            hexadecimal[i] = '0' + r;
        else
            hexadecimal[i] = 'A' + (r-10);
        decimal = decimal/16;
        i++;

    }
    printf("Hexadecimal Number : ");

    for(;i--;)
    {
        printf("%c",hexadecimal[i]);
    }
    return 0;
}
