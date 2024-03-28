#include<stdio.h>
int main()
{
    char a[20];
    int i;
    scanf("%s",&a);
    for(i=0; i<3; i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    for(i=4; i<7; i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    for(i=8;i<10;i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    for(i=12;i<14;i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    return 0;
}
