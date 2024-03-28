#include<stdio.h>
void sum(int A[])
{
    int i;
  for(i=0;i<5;i++)
    {
        printf("%d\n",A[i]);
    }
}
int main()
{
    int A[]={10,20,30,40,50};

    sum(A);

}
