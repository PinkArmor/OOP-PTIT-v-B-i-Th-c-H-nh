#include <bits/stdc++.h>
using namespace std;
int b=1;
void thuong(string &s){
	for(int i=0; i<s.size(); i++){
		s[i]=tolower(s[i]);
	}
}
class ds{
private:
    string ten,dtoc,mts;
    double diem,kq;
    int kv;
public:
	friend istream &operator>>(istream &in, ds &a){
		if(b<10) a.mts="TS0";
		else a.mts="TS";
		a.mts=a.mts+to_string(b);
		++b;
		scanf("\n");
		getline(in,a.ten);
		in>>a.diem;
		scanf("\n");
		getline(in,a.dtoc);
		in>>a.kv;
		a.kq+=a.diem;
		return in;
	}
	friend ostream &operator<<(ostream &out, ds a){
		if(a.kv==1){
			a.kq+=1.5;
		}
		if(a.kv==2){
			a.kq+=1.0;
		}
		if(a.dtoc != "Kinh"){
			a.kq+=1.5;
		}
		out<<a.mts<<" ";
		thuong(a.ten);
		stringstream ss(a.ten);
		string tmp;
		vector<string> v;
		while(ss>>tmp){
			v.push_back(tmp);
		}
		for(int i=0; i<v.size(); i++){
			v[i][0]=toupper(v[i][0]);
		}
		for(int i=0; i<v.size(); i++){
			out<<v[i]<<" ";
		}
		out<<fixed<<setprecision(1)<<a.kq<<" ";
		if(a.kq>=20.5){
			out<<"Do\n";
		}
		else{
			out<<"Truot\n";
		}
		return out;
	}
	double getkq(){
		return this->kq;
	}
	string getmts(){
		return this->mts;
	}
};
bool cmp(ds a, ds b){
	if(a.getkq()==b.getkq()){
		return a.getmts()<b.getmts();
	}
	return a.getkq()>b.getkq();
}
void sapxep(ds a[], int n){
	sort(a,a+n,cmp);
}
int main(){
	int n; cin>>n;
	ds a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sapxep(a,n);
	for(int i=0; i<n; i++){
		cout<<a[i];
	}
}
