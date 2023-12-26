#include <bits/stdc++.h>
using namespace std;
class ds{
private:
	string mdn, ten;
	int quantity;
public:
	friend istream &operator>>(istream &in, ds &a){
	    in.ignore();
		getline(in,a.mdn);
		getline(in,a.ten);
		in>>a.quantity;
		return in;
	}
	friend ostream &operator<<(ostream &out, ds a){
		out<<a.mdn<<" "<<a.ten<<" "<<a.quantity<<endl;
		return out;
	}
	string getten(){
		return this->mdn;
	}
	int getquantity(){
		return this->quantity;
	}
};
bool cmp(ds a, ds b){
	if(a.getquantity()==b.getquantity()){
		return a.getten()<b.getten();
	}
	return a.getquantity()>b.getquantity();
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
