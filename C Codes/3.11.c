#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number =  ");
    scanf("%d",&a);
    if(a>=1 || a<=100)
    {
        printf("YES\n");
    }
else
{
    printf("NO\n");
}
return 0;
}
