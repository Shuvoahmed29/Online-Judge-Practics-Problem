#include<iostream>
using namespace std;
int32_t main(){
	int tt;	cin >> tt;
	while(tt--){
		string str;
		int n;	cin >> n >> str;
		if(str == "FIFO"){
			int arr[n];
			int idx=0,idx2=0;
			while(n--){
				string str1;
				cin >> str1;
				if(str1 == "IN"){
					int data; cin >> data;
					arr[idx] = data;
					idx++;
				}
				else if(str1 == "OUT"){
					if(idx2<idx){
						cout << arr[idx2] << endl;
						idx2++;
					}
					else cout << "None\n";
				}
			}
		}
		else if(str == "FILO"){
			int arr[n];
			int idx = 0,idx2=0;
			while(n--){
				string str2;	cin >> str2;
				if(str2 == "IN"){
					int data;	cin >> data;
					idx++;
					arr[idx] = data;
				}
			else if(str2 == "OUT"){
				if(idx2>=0){
					cout << arr[idx] << endl;
					idx--;
				}
				else cout << "None\n";
			}
		}
	}
	}
}