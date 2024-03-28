#include<stdio.h>
int main()
{
    int N,i;
    int x,y;
    float mult;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d%d",&x,&y);
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else if(x==0)
        {
            mult=0;
            printf("%0.1f\n",mult);
        }
        else
        {
            mult=(float)x/y;
            printf("%0.1f\n",mult);
        }
    }
    return 0;
}
