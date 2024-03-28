/*#include<stdio.h>
char solve(char *s){
    char temp;
    int len=0;
    while(s[len]!='\0')len++;
    for(int i=0;i<len/2;i++){
        temp=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=temp;
    }
}
int main(){
    char str[100];
    gets(str);
    
    /*for(int i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }*/
    /*char temp;
    for(int i=0;i<len/2;i++){
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    printf("%s",str);*/
    /*solve(str);
    printf("%s\n",str);
}*/
/*#include <stdio.h>
int solve(int a){
    static int sum=0;
    if(a==0)return sum;
    sum=10*sum+(a%10);
    solve(a/10);
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",solve(n));
}*/
//Reverce any Number
/*#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    while(n!=0){
        int r=n%10;
        sum=10*sum+r;
        n/=10;
    }
    printf("%d\n",sum);
}*/
//Reverce any string
/*#include<stdio.h>
int main(){
    char s[100],t;
    gets(s);
    int len=0;
    while(s[len]!=0)len++;
    for(int i=0;i<len/2;i++){
        t=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=t;
    }
    printf("%s\n",s);
}*/
//Reverce any number Using recursion
/*#include <stdio.h>
int solve(int a);
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",solve(n));
    return 0;
}
int solve(int a){
    static int sum=0;
    if(a==0)return sum;
    sum=10*sum+(a%10);
    solve(a/10);
    return sum;
}*/
/*#include<stdio.h>
char solve(char *s){
    int len=0;
    char t;
    while(s[len]!=0)len++;
    for(int i=0;i<len/2;i++){
        t=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=t;
    }
}
int main(){
    char str[100];
    gets(str);
    solve(str);
    printf("%s\n",str);
    return 0;
}*/
//Revarce any string using recursion
/*#include<stdio.h>
void solve(){
    char s;
    scanf("%c",&s);
    if(s!='\n'){
        solve();
        printf("%c",s);
    }
}
int main(){
    solve();
    return 0;
}*/

