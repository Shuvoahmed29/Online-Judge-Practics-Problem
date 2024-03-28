// 1.Write a C program to find out largest element of an array.
//2. Write a C program to find out second largest element of an unsorted
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    int max1=arr[0];
    for(int i=1;i<n;i++)
        if(arr[i]>max1)max1=arr[i];
    int max2=arr[0];
    if(max2==max1)max2=arr[1];
    for(int i=0;i<n;i++){
        if(arr[i]==max1)continue;
        if(max2<arr[i])max2=arr[i];
    }
    
    printf("%d",max2);
}*/
// 3. Write a C program to find out second smallest element of an unsorted
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    int mini1=arr[0];
    for(int i=1;i<n;i++)
        if(arr[i]<mini1)mini1=arr[i];
    int mini2=arr[0];
    if(mini2==mini1)mini2=arr[1];
    for(int i=0;i<n;i++){
        if(arr[i]==mini1)continue;
        if(mini2>arr[i])mini2=arr[i];
    }
    
    printf("%d",mini2);
}*/
//6. Write a C program for insert an element at desired position in an array.
/*#include <stdio.h>
int main()
{
    int n, t;
    printf("Enter Element Number: ");
    scanf("%d", &n);
    int arr[n], p, l;
    printf("Enter array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter Position: ");
    scanf("%d", &p);
    printf("Enter Value to add: ");
    scanf("%d", &l);
    for (int i = n-1; i >= p - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[p - 1] = l;
    for (int i = 0; i <= n; i++)
        printf("%d ", arr[i]);
}*/
