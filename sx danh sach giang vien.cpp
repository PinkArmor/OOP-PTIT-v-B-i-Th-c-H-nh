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
	string ten,lop,id;
public:
	friend istream &operator>>(istream &in, ds &a){
		if(b<10) a.id= "GV0";
		else a.id= "GV";
		a.id=a.id + to_string(b);
//		if(b==1){
//			in.ignore();
//		}
		++b;
		getline(in,a.ten);
		getline(in,a.lop);
		return in;
	}
	friend ostream &operator<<(ostream &out, ds a){
		hoa(a.lop);
		stringstream ss(a.lop);
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
	string getten(){
		return this->ten;
	}
	string getid(){
		return this->id;
	}
};
bool cmp(ds a, ds b){
	stringstream ss(a.getten());
	string tmp;
	vector<string> v;
	while(ss>>tmp){
		v.push_back(tmp);
	}
	string a1=v[v.size()-1];
	
	stringstream ss1(b.getten());
	string tmp1;
	vector<string> v1;
	while(ss1>>tmp1){
		v1.push_back(tmp1);
	}
	string b1=v1[v1.size()-1];
	if(a1==b1){
		return a.getid()<b.getid();
	}
	return a1<b1;
}
void sapxep(ds a[], int n){
	sort(a,a+n,cmp);
}
int main(){
	ios_base::sync_with_stdio(0); // insert
    cin.tie(0); // insert
	int n; cin>>n;
	cin.ignore();
	ds a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sapxep(a,n);
	for(int i=0; i<n; i++){
		cout<<a[i];
	}
}
