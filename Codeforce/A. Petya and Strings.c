#include<stdio.h>
#include<string.h>
int main()
{
    char A[100],B[100];
    scanf("%s",A);
    scanf("%s",B);
    int i,len,f=0,sum1=0,sum2=0;
    len = strlen(A);
    for(i=0; i<len; i++)
    {
        if(A[i]>=65 && A[i]<=91)
        {
            A[i] = A[i]+32;
        }
    }


    for(i=0; i<len; i++)
    {
        if(B[i]>=65 && B[i]<=91)
        {
            B[i] = B[i]+32;
        }
    }



     for(i=0; i<len; i++)
     {
         if(A[i]>=97 && A[i]<=123)
         {
             sum1 = sum1+A[i];
         }
     }

     for(i=0; i<len; i++)
     {
         if(B[i]>=97 && B[i]<=123)
         {
             sum2 = sum2+B[i];
         }
     }
    for(i=0; i<len; i++)
    {
        if(A[i]==B[i])
        {
            f++;
        }
    }
    /*for(i=0; i<len; i++)
    {
        if(A[i]>=97 && A[i]<=123)
        {
            if(A[i]>=B[i])
            {
                sum1++;
            }
            else//asadasdasd asdwasdawd

            {
                sum2++;
            }
        }

    }*/

    if(f==len)
    {
        f=0;
        printf("%d\n",f);
    }

    else if(sum1>sum2)
    {
        f=1;
        printf("%d\n",f);
    }
    else if(sum2>sum1)
    {
        f=-1;
        printf("%d\n",f);
    }

    return 0;
}

