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
	int n;	cin >> n;
	int cunt=0,sum=0;
	cout << "All Divisors are!\n";
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			cout << i << " " << n/i << endl;
			cunt +=1;
			sum +=i;
			if(n/i==i) continue;
			cunt +=1;
			sum += (n/i);
		}
	}
	cout << "No. of divisors: " << cunt <<  endl;
	cout << "Sum of divisors: " << sum << endl;
}
