#include<stdio.h>
int main()
{
    int num[]={1,2,3,4,5,6,7};
    int value,pos=-1,i;
    printf("which value do u want: ");
    scanf("%d",&value);

    for(i=0;i<7;i++)
    {
        if(value==num[i])
        {
            pos=i+1;


        }
    }
        if(pos=-1)
        {

            printf("This value is not found.");

        }
        else
        {
          printf("This value is stand in %d position.",pos);
        }



}
