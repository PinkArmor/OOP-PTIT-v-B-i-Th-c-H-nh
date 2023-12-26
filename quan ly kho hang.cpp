#include <bits/stdc++.h>
using namespace std;
class ds{
private:
	string id, ten, hang, dvi;
	long long nhap, ban, loi;
public:
	friend istream &operator>>(istream &in,ds &a){
		in.ignore();
		getline(in,a.ten);
		getline(in,a.hang);
		getline(in,a.dvi);
		in>>a.nhap>>a.ban;
		a.loi=a.ban-a.nhap;
		stringstream ss(a.ten);
		string tmp;
		vector<string> v;
		while(ss>>tmp){
			v.push_back(tmp);
		}
		for(int i=0; i<v.size(); i++){
			a.id+=toupper(v[i][0]);
		}
        static map<string,int> mp;
        mp[a.id]++;
        string tmp1 = to_string(mp[a.id]);
        while(tmp1.size() < 4){
        	tmp1 = "0" + tmp1;
		}
		a.id= a.id + tmp1;
		return in;
	}
	friend ostream &operator<<(ostream &out, ds a){
		out<<a.id<<" "<<a.ten<<" "<<a.hang<<" "<<a.dvi<<" ";
		out<<a.nhap<<" "<<a.ban<<endl;
		return out;
	}
	int getloi(){
		return this->loi; 
	}
	string getid(){
		return this->id;
	}
};
bool cmp(ds a, ds b){
	if(a.getloi()==b.getloi()){
		return a.getid()<b.getid();
	}
	return a.getloi()>b.getloi();
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
