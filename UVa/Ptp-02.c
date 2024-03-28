#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int n,m,i,j,len1,len2;
    int count=0,count1=0;
    printf("Main String Length: ");
    scanf("%d",&n);
    printf("Sub String Length: ");
    scanf("%d",&m);


    char str[n],sub[m];
    //str=(char*) malloc (n*sizeof(char));
    //sub=(char*) malloc (m*sizeof(char));

    printf("Main String: ");
    scanf("\n",str);
    gets(str);
    len1=strlen(str);

    printf("Sub String: ");
    scanf("\n",sub);
    gets(sub);
    len2=strlen(sub);

    for(i=j=0)
    printf("Number of Substring: %d\n",count1);
}
