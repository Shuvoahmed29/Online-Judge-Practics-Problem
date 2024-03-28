#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int X[n],min,i,k=1;
    for(i=0; i<n; i++)
    {
        scanf("%d",&X[i]);
    }
    min=X[0];
    for(i=1; i<n; i++)
    {
        if(min>X[i])
        {
            min=X[i];

        }
    }
    for(i=0;i<n;i++)
    {
        if(X[i]==min)
        {
            break;
        }
    }
        printf("Menor valor: %d\n",min);
        printf("Posicao: %d\n",i);
        return 0;
    }

