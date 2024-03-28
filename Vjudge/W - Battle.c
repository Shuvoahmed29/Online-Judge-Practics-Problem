#include<stdio.h>
int main()
{
    int A,B,C,D,E=0;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    while(A>0 && C>0)
    {
        if(E%2 == 0)
        {
            C=C-B;
            E++;
        }
        else
        {
            A=A-D;
            E++;
        }
    }
    if(A<=0)  printf("No\n");
    else printf("Yes\n");
}
