#include <stdio.h>

int main() {
    int tt,n,a,b;
    scanf("%d", &tt);
    for(int t=1;t<=tt;t++){
        scanf("%d", &n);
        scanf("%d%d", &a,&b);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        int cunt=0,p;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                p = arr[i]+arr[j];
                if(p>=a && p<=b) cunt++;
            }
        }
        printf("Case %d: %d\n",t,cunt);
    }

    return 0;
}


