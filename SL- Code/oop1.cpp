#include<bits/stdc++.h>
using namespace std;
class base{
protected:
	int a, b;
	friend class drive;
};
class drive:public base{
public:
	void set_data(int a,int b){
		this->a =a;
		this->b=b;
	}
	void show(){
		cout<<a<<" "<<b<<'\n';
	}
};
int main(){
	drive obj;
	int x,y;
	cout<<"Enter any integer: ";
	cin>>x>>y;
	obj.set_data(x,y);
	obj.show();
}