/*.............2018............*/
//Part-A Question -1(b)
/*#include<stdio.h>
int main(){
    int n,cunt=0;
    scanf("%d",&n);
    while(n!=0){
        int rem=n%10;
        if(rem!=0)cunt++;
        n=n/10;
    }
    printf("%d",cunt);
    return 0;
}*/
//Part-A Question -1(c)
/*#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    a=a+b;b=a-b;a=a-b;
    printf("a = %d, b = %d",a,b);
    return 0;
}*/
//Part-A Question -2(a)
/*#include <stdio.h>
int main(){
    int n,cunt=0;;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0)cunt++;
        if(cunt>2){printf("Not Prime.\n");return 0;}
    }
    if(cunt==2)printf("Prime.\n");
    else printf("Not Prime.\n");
    return 0;
}*/
//Part-A Question -2(b)
/*#include<stdio.h>
int main(){
    int n,a=1,sum=0,d=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+a;
        d=d+2;a=a+d;
    }
    printf("%d\n",sum);
    return 0;
}*/
//Part-A Question -3(a)
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
//Part-A Question -3(b)
/*#include<stdio.h>
#include<string.h>
int main(){
    char str[100],s;
    gets(str);
    s=str[0];
    str[0]=str[strlen(str)-1];
    str[strlen(str)-1]=s;
    printf("%s",str);
    return 0;
}*/
//Part-A Question -4(a)
/*#include<stdio.h>
int main(){
    char s1[100],s2[100];
    printf("First Name: ");
    gets(s1);
    printf("First Name: ");
    gets(s2);
    printf("%s %s",s2,s1);
    return 0;
}*/
//Part-A Question -4(c)
/*#include<stdio.h>
int main(){
    int i=0;
    for(;i<20;i++){
        printf("In for loop.\n");
        printf("After for loop.\n");
    }
    return 0;
}*/
//Part-B Question -1(a)
/*#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)malloc(5*sizeof(int));
    for(int i=0;i<5;i++)scanf("%d",&ptr[i]);
    for(int i=4;i>=0;i--)printf("%d\t",ptr[i]);
    return 0;
}*/
//Part-B Question -2(b)
/*#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n*m];
    for(int i=0;i<n*m;i++)scanf("%d",&arr[i]);
    int sum=arr[0]+arr[n*m-1];
    if(n==3)sum=sum+arr[4];
    else if(n==4)sum=sum+arr[5]+arr[10];
    printf("%d\n",sum);
    return 0;
}*/




