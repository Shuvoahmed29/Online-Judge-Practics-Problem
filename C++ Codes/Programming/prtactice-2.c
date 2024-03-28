// 1. Write a C program to find factorial of a number using recursion.
/*#include<stdio.h>
int solve(int a){
    if(a!=0) return a*solve(a-1);
    else return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",solve(n));
    return 0;
}*/
// 2. Write a C program to find GCD of a two number using recursion.
/*#include<stdio.h>
int solve(int a,int b){
    int x=a,y=b;
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;//GCD
    //return (x*y)/a;//LCM
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    printf("%d\n",solve(n,m));
    return 0;
}*/
// 3. Write a C program to find out sum digit of a number using recursion.
/*#include<stdio.h>
int solve(int a){
    if(a!=0)return a+solve(a-1);
    else return a;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",solve(n));
    return 0;
}*/
//4. Write a C program to find power of a number using function recursion.
/*#include<stdio.h>
int solve(int a,int b){
    if(b==0)return 1;
    else return a*solve(a,b-1);
}
int main(){
    int n,p;
    scanf("%d%d",&n,&p);
    printf("%d\n",solve(n,p));return 0;
}*/
//5. Write a C program to reverse any number using recursion.
/*#include<stdio.h>
#include<math.h>
int solve(int a){
    int digit = (int) log10(a);
    if(a==0)return 0;
    return ((a%10 * pow(10, digit)) + solve(a/10));
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",solve(n));return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main(){
    int n,p=-1,sum=0;
    scanf("%d",&n);
    int c=n;
    while(c!=0){
        c/=10;
        p++;
    }
    while(n!=0){
        int rem=n%10;
        sum=sum*10+rem;
        n/=10;
    }
    printf("%d\n",sum);
    return 0;
}*/
// 1. Write a C program to swap two numbers.
/*#include<stdio.h>
int main(){
    int a,b,temp;
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d\t%d\n",a,b);return 0;
}*/
// 2. Write a C program to swap two numbers without using third variable.
/*#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\t%d\n",a,b);return 0;
}*/
// 3. Write a C program to swapping of two arrays.
/*#include<stdio.h>
int main(){
    int a[5],b[5];
    for(int i=0;i<5;i++)scanf("%d",&a[i]);
    for(int i=0;i<5;i++)scanf("%d",&b[i]);
    for(int i=0;i<5;i++){
        int temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
    printf("A.......\n");
    for(int i=0;i<5;i++)printf("%d\t",a[i]);
    printf("B.......\n");
    for(int i=0;i<5;i++)printf("%d\t",b[i]);
}*/
// 4. Write a C program for swapping of two string.
/*#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100],s3[100];
    gets(s1);
    gets(s2);
    strcpy(s3,s1);
    strcpy(s1,s2);
    strcpy(s2,s3);
    printf("first = %s\n",s1);
    printf("second = %s\n",s2);
}*/
// 1. Write a C program to convert the string from upper case to lower case.
/*#include<stdio.h>
int main(){
    char str[100];
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        if(65<=str[i]<=90 && str[i]!=' ')str[i]=str[i]+32;
    }
    printf("%s\n",str);
}*/
// 2. Write a C program to convert the string from lower case to upper case.
/*#include<stdio.h>
int main(){
    char str[100];
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        if(97<=str[i]<=122 && str[i]!=' ')str[i]=str[i]-32;
    }
    printf("%s\n",str);
}*/
//3. Write a C program to delete the all consonants from given string.
/*#include<stdio.h>
int main(){
    char str[100];
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '||str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
        printf("%c",str[i]);
        else continue;
    }
}*/
// 5. Write a C program to sort the characters of a string.
/*#include<stdio.h>
int main(){
    char str[100],temp;
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        if(65<=str[i]<=90 && str[i]!=' ')str[i]=str[i]+32;
    }
    for(int i=0;str[i]!='\0';i++){
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]>str[j]){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("%s\n",str);
}*/
//6. Write a C program for concatenation two strings without using string.h
/*#include<stdio.h>
int main(){
    char s1[100],s2[100],s3[100];
    gets(s1);
    gets(s2);
    int i=0,p=0;
    while(s1[i]!='\0'){
        s3[p]=s1[i];
        p++;
        i++;
    }
    i=0;
    while(s2[i]!='\0'){
        s3[p]=s2[i];
        p++;
        i++;
    }
    printf("%s\n",s3);
}*/
// 7. Write a C program to find the length of a string using pointer.
#include <stdio.h>
int main()
{
    char A[100];
    int *len, i = 0, p = 0;
    gets(A);
    len = &p;
    *len = p;
    while (A[i] != '\0')
    {
        *len = *len + 1;
        i++;
    }
    printf("%d\n", *len);
    return 0;
}
