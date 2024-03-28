#include<stdio.h>
int main()
{
    int a,b,i,n,j,k;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a,&b);

        for(j=1; j<a; j++)
        {
            if(b>a)
            {
                k=b-a;
                printf("%d\n",k);
                break;
            }
            else
            {
                b=b*j;
                if(b>a)
                {
                    k=b-a;
                    printf("%d\n",k);
                    break;
                }
            }
        }
    }
    return 0;
}
