#include<stdio.h>
#include<math.h>
int main()
{
    int n, m, q, i, j, c, r, k, count;
    scanf("%d%d%d", &n, &m, &q);
    r=pow(m, n);
    int pos[n], seq[r][n];
    for(i=0; i<n; i++){
        pos[i]=1;
    }
    for(i=0; i<r; i++){

        for(j=0; j<n; j++){
            seq[i][j]=pos[j];
        }

        if(pos[0]==m){
            count=i; break;
        }

        pos[j-1]++;
        if(pos[j-1]>m){
            for(c=j-1; c>=0; c--){
                if(pos[c]>m){
                    pos[c-1]++;
                    for(k=c; k<n; k++){
                        pos[k]=pos[c-1];
                    }
                }
            }
        }
    }


    for(i=0; i<=count; i++){
        for(j=0; j<n; j++){
            printf("%d, ", seq[i][j]);
        }
        printf("\n");
    }


    return 0;
}
