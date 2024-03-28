/*.............2017.............*/
//Part-A Question no -1(a)
/*#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    gets(str);
    int len=strlen(str),zero=0,one=0;
    for(int i=0;i<len;i++)
    if(str[i]=='0')zero++;
    else one++;
    printf("Number of \"0\"= %d\n",zero);
    printf("Number of \"1\" = %d\n",one);
    return 0;
}*/
//Part-A Question no -1(b)
/*#include<stdio.h>
#include<math.h>
int main(){
    int b=-(-5),a=1,c=6;
    int d=(b*b)-(4*a*c);
    if(d<0)printf("There is No Answer.\n");
    else{
        int x1=(b+sqrt(d))/(2*a);
        int x2=(b-sqrt(d))/(2*a);
        printf("The ans are: x= %d\t y=%d\t",x1,x2);
    }
    return 0;
}*/
//Part-A Question no -2(b)
/*#include<stdio.h>
int main(){
    int b=10,a;
    a=-b--;
    printf("a = %d\nb = %d\n",a,b);
    return 0;
}
//Output: a=-10,b=9;*/
//Part-B Question no -1(c)
/*#include<stdio.h>
int main(){
    int x=5%2;//5.3 isn't work but ans is 1.
    printf("x = %d\n",x);
    return 0;
}
//Output: 1*/
//Part-B Question no -2(a)
/*#include <stdio.h>
int rec(int a)
{
    int p = a;
    if (p == 0)
        return 0;
    return (a * a) + rec(a - 1);
    p--;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", rec(n));
    return 0;
}*/
//Part-B Question no -2(c)
/*#include <stdio.h>
int main(){
    int n,rem;
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        printf("%d",rem);
        n=n/10;
    }
    return 0;
}*/
//Part-B Question no -3(a)
/*#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    int max=arr[0];
    for(int i=1;i<n;i++)if(max<arr[i])max=arr[i];
    printf("%d",max);
}*/
//Part-B Question no -3(c)
/*#include<stdio.h>
int main(){
    int m[2];
    int *p=m;
    m[0]=100;
    m[1]=200;
    printf("%d %d",*++p,*p);
    return 0;
}
//Output 200,100*/
//Part-B Question no -4(c)
/*#include<stdio.h>
void display();
int n=5;
int main(){
    ++n;
    display();
    return 0;//Why this code isn't run I don't no bro!!!
    void display(){
        ++n;
        printf("n = %d\n",n);
    }
}*/