#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y,k,p=0;
    cout<<"Enter the Number of Rows     : ";
    cin>>x;
    cout<<"Enter the Number of Columns  : ";
    cin>>y;
    while(x!=y)
    {
        cout<<"Error!!!! You Need rows & columns must be equal"<<endl;
       cout<<"Enter the Number of Rows     : ";
    cin>>x;
    cout<<"Enter the Number of Columns  : ";
    cin>>y;
    }
    int element[x][y],i,j;
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            printf("\nelement - [%d],[%d] : ",i,j);
            scanf("%d",&element[i][j]);
        }
    }
    printf("\n\nThe matrix is : \n");
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            printf("%d ",element[i][j]);

        }
        printf("\n");
    }
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            if(i!=j)
            {
                if(element[i][j]==0)
                    p++;
            }


        }

    }
    k = (x*y)-p;

    if(k==x)
    {
        printf("The matrix is an identity matrix.\n");
    }
    else
    {
        printf("The matrix is NOT an identity matrix.");
    }

}





