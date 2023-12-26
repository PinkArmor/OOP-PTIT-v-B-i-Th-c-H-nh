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
	string getmsv(){
		return this->msv;
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
		cout<<"DANH SACH SINH VIEN KHOA "<<s<<":"<<endl;
		string s1=s.substr(2,2);
		for(int i=0; i<n; i++){
			string s2 = a[i].getmsv().substr(1,2);
			if(s1==s2){
				cout<<a[i];
			}
		}
		cout<<endl;
	}
}
