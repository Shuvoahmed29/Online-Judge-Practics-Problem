#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<"\n";
        int xa,xb,sum=0;
        cin>>xa>>xb;
        cout<<"\n";
        int ya,yb;
        cin>>ya>>yb;
        cout<<"\n";
        int fa,fb;
        cin>>fa>>fb;
        if((xa==ya) && (ya==fa)){
            if(((xb<fb)&&(fb<yb))||((yb<fb)&&(fb<xb))){
                sum=abs(xa-ya)+abs(xb-yb);
                cout<<sum+2<<"\n";
            }
            else{
                sum=abs(xa-ya)+abs(xb-yb);
                cout<<sum<<"\n";
            }
        }
        else if((xb==yb) && (yb==fb)){
             if(((xa<fa)&&(fa<ya))||((ya<fa)&&(fa<xa))){
                sum=abs(xa-ya)+abs(xb-yb);
                cout<<sum+2<<"\n";
            }
            else{
                sum=abs(xa-ya)+abs(xb-yb);
                cout<<sum<<"\n";
            }
        }
        else{
            sum=abs(xa-ya)+abs(xb-yb);
            cout<<sum<<"\n";
        }
    }
    return 0;
}