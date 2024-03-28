#include<stdio.h>
int main()
{
    int i,j,k,value;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++){
                for(k=1;k<=10;k++){
            value=i*j*k;

            printf("%d\n\n\t",value);
                }

    }
    }
    return 0;
}
