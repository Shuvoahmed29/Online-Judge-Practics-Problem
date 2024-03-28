#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5;
    int i=0;
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);

    if(n1%2==0)
    {
        i++;
    }
    if(n2%2==0)
    {
        i++;
    }
    if(n3%2==0)
    {
        i++;
    }
   if(n4%2==0)
    {
        i++;
    }
    if(n5%2==0)
    {
        i++;
    }

    printf("%d valores pares\n",i);
    return 0;
}

