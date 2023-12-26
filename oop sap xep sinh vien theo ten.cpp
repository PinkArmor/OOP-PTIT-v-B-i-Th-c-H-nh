#include<bits/stdc++.h>
using namespace std;
class sv{
private:
	string msv,ten,lop,mail;
public:
	friend istream &operator >> (istream &in, sv &a){
		in>>a.msv;
		in.ignore();
		getline(in,a.ten);
		in>>a.lop>>a.mail;
		return in;
	} 
	friend ostream &operator << (ostream &out, sv &a){
		out<<a.msv<<" "<<a.ten<<" "<<a.lop<<" "<<a.mail<<endl;
		return out;
	}
	string getlop(){
		return this->lop;
	}
	string getmsv(){
		return this->msv;
	}
};
bool cmp(sv a, sv b){
	if(a.getlop()==b.getlop()){
		return a.getmsv() < b.getmsv();
	}
	return a.getlop()<b.getlop();
}
void sapxep(sv a[], int n){
	sort(a,a+n,cmp);
}
int main(){
	int n; cin>>n;
	sv a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sapxep(a,n);
	for(int i=0; i<n; i++){
		cout<<a[i];
	}
}
