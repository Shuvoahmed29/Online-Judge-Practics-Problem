#include<stdio.h>
int main()
{
    int i,j,A[5][5],k,z,w;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&A[i][j]);
        }

    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(A[i][j]==1)
            {
                k=i+1;
                z=j+1;
            }
        }

    }
    w = abs(k-3) + abs(z-3);
    printf("%d\n",w);
    return 0;
}
