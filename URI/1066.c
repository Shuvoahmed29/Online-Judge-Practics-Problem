#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5;
    int i=0,j=0,k=0,l=0;
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


    if(n1%2!=0)
    {
        j++;
    }
    if(n2%2!=0)
    {
        j++;
    }
    if(n3%2!=0)
    {
        j++;
    }
   if(n4%2!=0)
    {
        j++;
    }
    if(n5%2!=0)
    {
        j++;
    }



     if(n1>0)
    {
        k++;
    }
    if(n2>0)
    {
        k++;
    }
    if(n3>0)
    {
        k++;
    }
   if(n4>0)
    {
        k++;
    }
    if(n5>0)
    {
        k++;
    }



    if(n1<0)
    {
        l++;
    }
    if(n2<0)
    {
        l++;
    }
    if(n3<0)
    {
        l++;
    }
   if(n4<0)
    {
        l++;
    }
    if(n5<0)
    {
        l++;
    }

    printf("%d valor(es) par(es)\n",i);
    printf("%d valor(es) impar(es)\n",j);
    printf("%d valor(es) positivo(s)\n",k);
    printf("%d valor(es) negativo(s)\n",l);
    return 0;
}


