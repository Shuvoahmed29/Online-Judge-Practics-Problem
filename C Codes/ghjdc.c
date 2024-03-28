#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#include <stdlib.h>
int main()
{
int n,numl,numr,sub,sub2,par,a;
scanf("%d", &n);
par=1;
for(numl=1;numl<(2*n);numl++)
{
sub=0;a=n;sub2=1;
for(numr=1;numr<(2*n);numr++)
{
if(numr<=par){a=n-sub;sub++;printf("%d ",a);}
else if(numr>=(2*n-par+1)){a=a+sub2;sub++;printf("%d ",a);}
else{printf("%d ",a);}
}
if(numl<n){par++;}
else{par--;}
printf("\n");
}
return 0;
}
