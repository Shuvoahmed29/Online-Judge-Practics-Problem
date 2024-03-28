#include<bits/stdc++.h>
using namespace std;
string generateRandomString(size_t length) { 
    random_device rd; 
    mt19937 gen(rd()); 
    string str("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"); 
 
    shuffle(str.begin(), str.end(), gen); 
 
    return str.substr(0, length); 
} 
int main(){
	int n;	cin >> n;
	while(n--){
		string s = generateRandomString(10);
		cout << s << endl;
	}
}