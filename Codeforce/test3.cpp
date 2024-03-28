#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
void printBinary(int n){
    for(int i=10;i>=0;i--){
        cout << ((n>>i)&1);
    }
    cout << endl;
}
// Right Shift(>>)
// Left Shift(<<)
int main(){
	code();
    int a=15;
	printBinary(a);

    //Check bit is set or not
    int i=0;
    if((a & (1<<i))!=0){
        cout << i << " th bit is set\n";
    }
    else{
        cout << i << " th bit is NOT set\n";
    }

    //Set bit in particular position
    printBinary( (a | (1<<2)) );
    cout <<"Decimal: "<< (a | (1<<2)) << endl;
    cout << a << endl;

    //Unset bit in particular position
    printBinary(a&(~(1<<1)));
    cout <<"Decimal: "<< (a&(~(1<<1))) << endl;

    //Toggle(0 to 1 and 1 to 0)
    printBinary((a ^ (1<<2)));
    cout <<"Decimal: "<< (a ^ (1<<2)) << endl;

    //Count number of set bit
    int set_bit = 0;
    for(int i=31;i>=0;i--){
        if((a & (1<<i))!=0) set_bit++;
    }
    cout << "Set Bit: " << set_bit << endl;
    //Count number of set bit using function for int
    cout <<"Set Bit: " << __builtin_popcount(a) << endl;

    //Count number of set bit using function for long long
    cout <<"Set Bit: " << __builtin_popcountll((1LL<<35)-1) << endl;



}
