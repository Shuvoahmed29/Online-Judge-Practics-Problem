#include<stdio.h>
int main()
{
    char a[20],b[20],c[20];
    gets(a);
    gets(b);
    gets(c);

    if(a[0]=='v' && b[20]=='a' && c[20]=='c')
    {
        printf("aguia\n");
    }
    else if(a=='v' && b=='a' && c=='o')
    {
        printf("pomba\n");
    }
    else if(a=='v' && b=='m' && c=='o')
    {
        printf("homem\n");
    }
     else if(a==vertebrado && b==m && c=='h')
    {
        printf("vaca\n");
    }
     else if(a==invertebrado && b==inseto && c==hematofago)
    {
        printf("pulga\n");
    }
     else if(a==invertebrado && b==inseto && c==herbivoro)
    {
        printf("lagarta\n");
    }

    else if(a==invertebrado && b==anelideo && c==hematofago)
    {
        printf("sanguessuga\n");
    }
     else if(a==invertebrado && b==anelideo && c==onivoro)
    {
        printf("minhoca\n");
    }
    return 0;
}
