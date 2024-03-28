#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main(){
    code();
    int n;  cin >> n;
    float x[n+1],y[n+1];
    for(int i=0;i<n;i++)    cin >> x[i] >> y[i];
    float sumX=0,sumY=0,sumXY=0,squreX=0,qubeX=0,fourX=0,X2Y=0;
    for(int i=0;i<n;i++){
        sumX += x[i];
        sumY += log(y[i]);
        sumXY += x[i]*log(y[i]);
        squreX += x[i]*x[i];
    }
    float a,b;
    b = (n*sumXY-sumX*sumY)/(n*squreX-sumX*sumX);
    a = (sumY-b*sumX)/n;
    a = exp(a);
    b = exp(b);
    cout << "Value of: \na = " << a << "\nb = " << b;
}
/*
y = a+bx
6
1 2.4
2 3
3 3.6
4 4
6 5
8 6




y = ab^x
7
1 87
2 97
3 113
4 129
5 202
6 195
7 193
*/