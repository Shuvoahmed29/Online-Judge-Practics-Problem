#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char s[200001];
int main()
{
    int tt;
    scanf("%d",&tt);
    while(tt--)
    {
        int nn,aa,bb;
        scanf("%d%d%d",&nn,&aa,&bb);
        ++nn;
        vector<int> vv(nn);
        ll sum=0;
        for(int i=1; i<nn; ++i)
        {
            scanf("%d",&vv[i]);
            sum+=vv[i];
        }

        ll res=1e18;

        for(int i=0; i<nn; ++i)
        {
            ll cur = (aa+bb)*(ll)vv[i];
            sum-=vv[i];
            cur+=(sum-(nn-i-1)*(ll)vv[i]) *bb;
            res=min(res,cur);
        }
        printf("%lld\n",res);
    }
    return 0;
}
