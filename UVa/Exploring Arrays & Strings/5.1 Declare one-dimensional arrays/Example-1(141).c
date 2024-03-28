#include<stdio.h>
int main()
{
    int tem[10];
    int i,sum=0;
    float avg;
    for(i=0;i<10;i++)
    {
        scanf("%d",&tem[i]);
        sum=sum+tem[i];
    }
    avg=(float)sum/10;
    printf("Average Temperature = %0.2f\n",avg);
    int max=tem[0];
    for(i=1;i<10;i++)
    {
        if(max<tem[i])
        {
            max=tem[i];
        }
    }
    printf("Maximum Temperature = %d\n",max);
    int min=tem[0];
    for(i=1;i<10;i++)
    {
        if(min>tem[i])
        {
            min=tem[i];
        }
    }
    printf("Minimum Temperature = %d\n",min);
    return 0;
}
