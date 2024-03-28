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
	int tt;	cin >> tt;
	while(tt--){
		int n,r1,c1,r2,c2;
		cin >> n >> r1 >> c1 >> r2 >> c2;
		int cunt = 0;
		for(int i=0;i<3;i++){
			if(r1-2>0 && c1-1>0){// (A-2, B -1)
				r1 = r1-2;
				c1 = c1-1;
				cunt++;
				cout << "1: " << r1 << " " << c1 << endl;
				continue;
			}
			else if(r1-2>0 && c1+1<=n){//(A-2, B+1)
				r1 = r1-2;
				c1 = c1+1;
				cunt++;
				cout << "2: " << r1 << " " << c1 << endl;
				continue;
			}
			else if(r1+2<=n && c1-1>0){// (A+2, B-1)
				r1 = r1+2;
				c1 = c1-1;
				cunt++;
				cout << "3: " << r1 << " " << c1 << endl;
				continue;
			}
			else if(r1+2<=n && c1+1<=n){//(A+2, B+1)
				r1 = r1+2;
				c1 = c1+1;
				cunt++;
				cout << "3: " << r1 << " " << c1 << endl;
				continue;
			}
			else if(r1-1>0 && c1-2>0){//(A-1, B-2)
				r1 = r1-1;
				c1 = c1-2;
				cunt++;
				cout << "4: " << r1 << " " << c1 << endl;
				continue;
			}
			else if(r1+1<=n && c1-2>0){//(A+1,B-2)
				r1 = r1+1;
				c1 = c1-2;
				cunt++;
				cout << "5: " << r1 << " " << c1 << endl;
				continue;
			}
			else if(r1-1>0 && c1+2<=n){//(A-1, B+2)
				r1 = r1-1;
				c1 = c1+2;
				cunt++;
				cout << "6: " << r1 << " " << c1 << endl;
				continue;
			}
			else if(r1+1<=n && c1+2<=n){//(A+1, B+2)
				r1 = r1+1;
				c1 = c1+2;
				cunt++;
				cout << "7: " << r1 << " " << c1 << endl;
				continue;
			}
		}
		cout << cunt << endl;
	}
}
