#include<bits/stdc++.h>
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
	string getlop(){
		return this->lop;
	}
};
void hoa(string &s){
	for(int i=0; i<s.size(); i++){
		s[i] = toupper(s[i]);
	}
}

int main(){
	int n; cin>>n;
	sv a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; 
		getline(cin,s);
		hoa(s);
		cout<<"DANH SACH SINH VIEN NGANH "<<s<<":"<<endl;
		string tmp;
		string s1="";
		stringstream ss(s);
		vector<string> v;
		while(ss>>tmp){
			v.push_back(tmp);
		}
		for(int i=0; i<2; i++){
			s1 += v[i][0];
		}
		for(int i=0; i<n; i++){
			string s2 = a[i].getmsv().substr(5,2);
			if(a[i].getlop()[0]=='E'&&(a[i].getmsv()[5]=='C' || a[i].getmsv()[5]=='A')){
				continue;
			}
			if(s1==s2){
				cout<<a[i];
			}
		}
		cout<<endl;
	}
}
