#include<stdio.h>
int main()
{
    int a[100];
    int i,n,sum=0;
    printf("How many number do you want: ");
    scanf("%d",&n);
    printf("Enter %d number: ",n);
    for(i=0;i<n;i++)
        {
    scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];

        }
        printf("The sum is %d\n",sum);
        return 0;
}
