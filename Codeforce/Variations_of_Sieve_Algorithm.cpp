#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
const int N = 1e7+5;
vector<bool>isPrime(N,true);
vector<int>Lowest_Prime(N,0),Highest_Prime(N,0);
int main(){
	code();
	isPrime[0]=isPrime[1]=false;
	for(int i=2;i<=N;i++){
		if(isPrime[i]){
			Lowest_Prime[i] = Highest_Prime[i]=i;
			for(int j=2*i;j<=N;j+=i){
				isPrime[j] = false;
				Highest_Prime[j] = i;
				if(Lowest_Prime[j]==0){
					Lowest_Prime[j]=i;
				}
			}
		}
	}
	// for(int i=1;i<30;i++){
	// 	cout << Lowest_Prime[i] <<" "<<Highest_Prime[i]<<endl;
	// }

	//Prime Factor
	int n;	cin >> n;
	vector<int>Factor;
	unordered_map<int,int>Prime;
	while(n>1){
		int prime_factor = Highest_Prime[n];
		// or prime_factor = Lowest_Prime[n];
		while(n%prime_factor==0){
			Factor.push_back(prime_factor);
			Prime[prime_factor]++;
			n=n/prime_factor;
		}
	}
	for(auto it:Factor) cout << it << " ";
	cout << endl;
	cout << "Number of Occurrence\n";
	for(auto it:Prime){
		cout << it.first << "-> "<<it.second << endl;
	}
}
