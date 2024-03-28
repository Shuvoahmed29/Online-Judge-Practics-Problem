#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter three number:   ");
    scanf("%d%d%d",&a,&b,&c);
    if(a-b>0 && a-c>0)
    {
        printf("%d is Biggest number",a);
    }
    else
    {
        if(b-c>0)
        {
          printf("%d is Biggest number",b);
        }
         else
         {
             printf("%d is Biggest number",c);
         }
    }
    getch();
}
