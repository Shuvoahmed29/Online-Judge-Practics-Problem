#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k=0,p,A[30];
    //printf("Enter Any integer Number[2-99] = ");
    //scanf("%d",&n);
    for(i=1; i<100; i++)
    {
        for(j=1; j<100; j++)
        {
            if(i%j==0) k++;
        }
        if(k==2)
        {
            for(p=0; p<30; p++)
            {
                A[p]=i;
            }
            k=0;
        }

    }
    for(p=0; p<99; p++)
    {
        printf("%d ",A[p]);
    }
    getch();
}
