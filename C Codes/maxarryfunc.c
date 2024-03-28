#include<stdio.h>
int ma(int X[])
{
    int i,max;
    max=X[0];
    for(i=0;i<6;i++)
    {
        if(max<X[i])
            max=X[i];
    }
    return max;
}
int main()
{
    int A[]={10,20,30,40,50,60};
    int maxi=ma(A);
    printf("Maximum value is : %d\n",maxi);
}
