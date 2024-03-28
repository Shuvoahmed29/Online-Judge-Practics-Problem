#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,j,k=0,i;
    cin>>n;
    for(i=1;i<4*n;)
    {
      printf("%d %d %d PUM\n",i,i+1,i+2);
      i=i+4;
    }
    return 0;
}
