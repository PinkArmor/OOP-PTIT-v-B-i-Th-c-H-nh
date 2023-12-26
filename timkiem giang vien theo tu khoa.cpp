#include <bits/stdc++.h>
using namespace std;
int b=1;
void hoa(string &s){
	for(int i=0; i<s.size(); i++){
		s[i] = toupper(s[i]);
	}
}
class ds{
private:
	string ten,mon,id;
public:
	friend istream &operator>>(istream &in, ds &a){
		if(b<10) a.id="GV0";
		else a.id="GV";
		a.id=a.id+to_string(b);
		++b;
		getline(in,a.ten);
		getline(in,a.mon);
		return in;
	}
	friend ostream &operator<<(ostream &out, ds a){
	    hoa(a.mon);
		stringstream ss(a.mon);
		string tmp;
		vector<string> v;
		out<<a.id<<" "<<a.ten<<" ";
		while(ss>>tmp){
			v.push_back(tmp);
		}
		for(int i=0; i<v.size(); i++){
			out<<v[i][0];
		}
		out<<endl;
		return out;
	}
	string getten(){
		return this->ten;
	}
};
int main(){
	int n; cin>>n;
	cin.ignore();
	ds a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<s<<":"<<endl;
		hoa(s);
		for(int i=0; i<n; i++){
			string s1=a[i].getten();
			hoa(s1);
			if(s1.find(s) != string::npos){
				cout<<a[i];
			}
		}
		cout<<endl;
	}
}
