#include<stdio.h>
int main()
{
    int A, B, C, D,p,q;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    if(B>D)
        p=D;
    else
        p=B;
    if(A>C)
        q=A;
    else
        q=C;
    if (D < A)
    {
        printf("0\n");
    }
    else if(B<=C)
    {
        printf("0\n");
    }
    else if(C<=A && B<=D)
    {
        printf("%d\n",(B - A));
    }
    else if(A<=C && D<=B)
    {
        printf("%d\n",(D - C));
    }
    else
    {
        printf("%d\n",(p - q));
    }
}
