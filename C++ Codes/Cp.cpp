#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char ss[200001];
int main() {
  int tt;
  scanf("%d",&tt);
  while(tt--){
    int nn, kk;
    scanf("%d%d",&nn,&kk);
    int OO=kk;
    scanf("%s",ss);
    string SS=ss;
    vector<int> res(nn);
    int oo=0;

    for(int i=0;i<nn && kk>0;++i){
      ss[i] ^= oo;
      if(kk%2!=ss[i]-'0' || i==nn-1)continue;
      ++res[i];
      --kk;
      oo^=1;
    }
    res.back() += kk;

    for(int i=0;i<nn;++i)
      if((OO-res[i])%2)SS[i]^=1;
    puts(SS.c_str());
    for(auto &xx:res)printf("%d ",xx);
    puts("");
  }
  return 0;
}
