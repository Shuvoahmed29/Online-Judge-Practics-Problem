//1. Write a c program to check given number is perfect number or not.
/*#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0)sum+=i;
    }
    printf("%d\n",sum);
    if(sum==n)printf("This Number is Perfect\n");
    else printf("Is not perfect\n");
    return 0;
}*/
//2. Write a c program to check given number is Armstrong number or not.
/*#include<stdio.h>
#include<math.h>
int solve(int a,int b){
    int ans=1;
    for(int j=0;j<b;j++)ans=ans*a;
    return ans;
}
int main(){
    int n;
    scanf("%d",&n);
    int len=0,p=n,sum=0,c=n;
    while(p!=0){p/=10;len++;}
    while(n!=0){
        int r=n%10;
        sum=sum+solve(r,len);
        n/=10;
    }
    if(sum==c)printf("This Number is Armstrong\n");
    else printf("Is not Armstrong\n");
}*/
// 3. Write a c program to check given number is prime number or not.
/*#include <stdio.h>
int main()
{
    int n, cunt = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cunt++;
        if (cunt > 2)
        {
            printf("Is not prime number\n");
            return 0;
        }
    }
    if (cunt == 2)
        printf("This Number is Prime Number\n");
    else
        printf("Is not prime number\n");
    return 0;
}*/
// 4. Write a c program to check given number is strong number or not.
/*#include <stdio.h>
int fact(int a){
    if(a==0)return 1;
    return a*fact(a-1);
}
int main(){
    int n,sum=0;scanf("%d",&n);
    int p=n;
    while(n!=0){
        int r=n%10;
        sum=sum+fact(r);
        n/=10;
    }
     if(p==sum)printf("This Number is strong Number\n");
    else printf("Is not strong number\n");return 0;
}*/
//6. Write a c program to check given number is palindrome number or not.
/*#include <stdio.h>
int main(){
    int n,sum=0;scanf("%d",&n);
    int p=n;
    while(n!=0){
        int r=n%10;
        sum=10*sum+r;n/=10;
    }
    if(p==sum)printf("This Number is palindrome\n");
    else printf("Is not palindrome\n");return 0;
}*/
// 7. Write a c program to check given string is palindrome number or not.
/*#include <stdio.h>
int main(){
    char str[100];
    gets(str);
    int len=0;
    while(str[len]!='\0')len++;
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
}*/
//9. Write a c program to print Fibonacci series of given range.
/*#include <stdio.h>
int main(){
    int n,sum=0;scanf("%d",&n);
    int arr[n];arr[0]=0,arr[1]=1;
    for(int i=0;i<n;i++){
        arr[i+2]=arr[i]+arr[i+1];
    }
    for(int i=0;i<n;i++){
        printf("%d + ",arr[i]);
        sum=sum+arr[i];
    }
    printf("... + n = %d\n",sum);
}*/
//11. Write a c program for Floyd’s triangle.
/*#include <stdio.h>
int main(){
    int n,p=1;scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("%d ",p);
            p++;
        }
        printf("\n");
    }
}*/
//C program to print hello world without using semicolon
/*#include <stdio.h>
int main(){
    if(printf("hello world"))return 0;
}*/
//13. Write a c program to generate multiplication table.
/*#include <stdio.h>
int main(){
    int n;scanf("%d",&n);
    for(int i=1;i<=10;i++){
        int multi=n*i;
        printf("%d x %d = %d\n",n,i,multi);
    }
}*/
/*#include <stdio.h>
int main()
{
    int rows, p = 1;
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", p);
        }
        printf("\n");
        p++;
    }
}*/