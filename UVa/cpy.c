#include <stdio.h>
#include<stdlib.h>
int main()
{

    int i,j,l,len1,len2,n,m;
    int count=0,count1=0;

    /*printf("Main String Length: ");
    scanf("%d",&n);

    printf("Sub String Length: ");
    scanf("%d",&m);*/

    char str[100],sub[5];
    //str=(char*) malloc (n*sizeof(char));
    //sub=(char*) malloc (m*sizeof(char));

    printf("Main String: ");
    scanf("%[^\n]s",str);
    len1 = strlen(str);

    printf("Sub String: ");
    scanf(" %[^\n]s",sub);
    len2 = strlen(sub);

    for (i=0; i<len1;)
    {
        j=0;
        count=0;
        while((str[i]==sub[j]))
        {
            count++;
            i++;
            j++;
        }
        if (count==len2)
        {
            count1++;
            count=0;
        }
        else
            i++;
    }
    printf("Number of Substring: %d\n",count1);
    return 0;
}
