/*........................2019.........................*/

/* Part-A Question no-1(a)*/
/*#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)malloc(10*sizeof(int));
    for(int i=0;i<10;i++)scanf("%d",&ptr[i]);
    for(int i=9;i>=0;i--)printf("%d\t",ptr[i]);
    return 0;
}*/

/* Part-A Question no-1(c)*/
/*#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    gets(str);
    int len=strlen(str);
    int p=len/2;
    for(int i=0;i<p;i++){
        if(str[i]!=str[len-i-1]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}*/

/* Part-A Question no-2(b)*/
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=1,b=1,sum=a+b,ans=2;
    if(n==1){
        printf("1 + .......+ n = 1");
    }
    else if(n==2){
        printf("1 + 1 +.......+ n = 2");
    }
    else if(n>2){
    printf("%d + %d + ",a,b);
    for(int i=2;i<n;i++){
        printf("%d + ",sum);
        ans=ans+sum;
        a=b;b=sum;sum=a+b;
    }
    printf(".....+ n = %d\n",ans);
    }
    return 0;
}*/

/* Part-A Question no-3(a)*/
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if((n%4==0 && n%100!=0)||(n%4==0 && n%100==0 && n%400==0))
    printf("YES\n");
    else printf("NO\n");
    return 0;
}*/

/* Part-A Question no-3(c)*/
/*#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    gets(str);
    int len=strlen(str);
    for(int i=0;i<len;i++)if(65<=str[i]<=90)str[i]=str[i]+32;
    printf("%s\n",str);
    return 0;
}*/

/* Part-A Question no-4(a)*/
/*#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    gets(str);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')continue;
        else printf("%c",str[i]);
    }
    return 0;
}*/

/* Part-B Question no-5(a)*/
/*#include <stdio.h>
int main() {
   int space,n,k= 0,cunt=0,cunt1=0;
   scanf("%d", &n);
   for (int row=1;row<=n;row++){
      for (space=1;space<=n-row;space++){
         printf("  ");
         cunt++;
      }
      while (k!=2*row-1){
        if (cunt<=n-1){
            printf("%d ",row+k);
            cunt++;
        } 
        else{
            cunt1++;
            printf("%d ", (row+k-2*cunt1));
        }
        k++;
      }
      cunt1=cunt=k=0;
      printf("\n");
   }
   return 0;
}*/

/* Part-B Question no-6(a)*/
/*#include<stdio.h>
int main(){
    char str[100],sub[100];
    printf("S1 : ");gets(str);
    printf("S2 : ");gets(sub);
    int l1=0,l2=0,i=0,j=0,cunt=0;
    while(str[i]!='\0'){l1++; i++;}
    while(sub[j]!='\0'){l2++; j++;}
    for(i=0,j=0;i<l1;i++){
        if(str[i]==sub[j])j++;
        else j=0;
        if(sub[j]=='\0'){
            cunt++;
            j=0;
        }
    }
    printf("%d\n",cunt);
    return 0;
}*/

/* Part-B Question no-6(b(i))*/
/*#include <stdio.h>
int main()
{
    int a, b = 10;
    a = -b--;
    printf("%d %d\n", a, b);
    return 0;
}*/

/* Part-B Question no-6(b(ii))*/
/*#include<stdio.h>
int main(){
    int p=0,q=2,i,j;
    for(i=0,j=0;i<p,j<q;i++,j++){
        printf("CSE\n");
    }
    return 0;
}*/

/* Part-B Question no-8(b(i))*/
/*#include<stdio.h>
char *getstring(){
    char *str="Nice test for string";
    return str;
}
int main(){
    printf("%s",getstring());
    getchar();
    return 0;
}
//Output: Nice test for string*/
/* Part-B Question no-8(b(i))*/
/*#include<stdio.h>
int main(){
    char str[]="geeksforgeeks";
    char *s1=str,*s2=str;
    for(int i=0;i<7;i++){
        printf("%c",*str);
        ++s1;
    }
    for(int i=0;i<6;i++){
        printf("%c",*s2);
        ++s2;
    }
    getchar();
    return 0;
}
//Output:ggggggg geeksf*/
