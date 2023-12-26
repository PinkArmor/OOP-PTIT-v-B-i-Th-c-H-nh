#include <bits/stdc++.h>
using namespace std;
int b=1;
void hoa(string &s){
	for(int i=0; i<s.size(); i++){
		s[i]= toupper(s[i]);
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
		while(ss>>tmp){
			v.push_back(tmp);
		}
		out<<a.id<<" "<<a.ten<<" ";
		for(int i=0; i<v.size(); i++){
			out<<v[i][0];
		}
		out<<endl;
		return out;
	}
	string getmon(){
		return this->mon;
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
	cin.ignore();
	while(t--){
		string s; 
		getline(cin,s);
		hoa(s);
		stringstream ss(s);
		string tmp;
		vector<string> v;
		while(ss>>tmp){
			v.push_back(tmp);
		}
		string s1="";
		for(int i=0; i<v.size(); i++){
			s1+=v[i][0];
		}
		cout<<"DANH SACH GIANG VIEN BO MON "<<s1<<":"<<endl;
		for(int i=0; i<n; i++){
			string s3= a[i].getmon();
			hoa(s3);
			stringstream ss1(s3);
			string tmp1;
			vector<string> v1;
			while(ss1>>tmp1){
				v1.push_back(tmp1);
			}
			string s2="";
			for(int i=0; i<v1.size(); i++){
				s2 += v1[i][0];
			}
			if(s1==s2){
				cout<<a[i];
			}
		}
		cout<<endl;
	}
}
