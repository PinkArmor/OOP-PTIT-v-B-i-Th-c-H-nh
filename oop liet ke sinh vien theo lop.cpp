#include <bits/stdc++.h>
using namespace std;
class sv{
private:
	string msv,ten,lop,mail;
public:
	friend istream &operator>>(istream &in, sv &a){
		in>>a.msv;
		in.ignore();
		getline(in,a.ten);
		in>>a.lop>>a.mail;
		return in;
	}
	friend ostream &operator<<(ostream &out, sv a){
		out<<a.msv<<" "<<a.ten<<" "<<a.lop<<" "<<a.mail<<endl;
		return out;
	}
	string getlop(){
		return this->lop;
	}
	
};
int main(){
	int n; cin>>n;
	sv a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int t; cin>>t;
	while(t--){
	    string s; cin>>s;
			cout<<"DANH SACH SINH VIEN LOP "<<s<<":"<<endl;
	    	for(int i=0; i<n; i++){
	    		if(s==a[i].getlop()){
	    			cout<<a[i];
				}
			}
		cout<<endl;
	}
}
