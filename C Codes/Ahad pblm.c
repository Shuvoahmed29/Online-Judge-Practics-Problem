#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    int i,k=0,j,p,sum=0,q;
    for(i=2; i<n; i++)
    {
        for(j=1; j<n; j++)
        {
            if(i%j==0)
            {
                k++;
            }
        }
        for(q=2; q<n; q++)
        {

            if(k==2)
            {
                for(p=1; p<n; p++)
                {
                    sum=sum+(int)(n/(int)pow(i,p));
                }
                printf("%d, %d\n",i,sum);
            }
            sum=0;
            k=0;
        }
    }
    return 0;
}
