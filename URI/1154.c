#include<stdio.h>
int main()
{
    int x,sum=0,i=0;
    float avg;
    while(1)
    {
        scanf("%d",&x);
        if(x<0)
        {
            break;
        }
        else
        {
            sum=sum+x;
            i++;
        }
    }
    avg=(float)sum/i;
    printf("%0.2f\n",avg);
    return 0;
}
