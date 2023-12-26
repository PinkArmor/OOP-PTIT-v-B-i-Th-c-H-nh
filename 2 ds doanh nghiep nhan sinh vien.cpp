#include <bits/stdc++.h>
using namespace std;
class ds{
private:
	string ten,mdn;
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
	int getquantity(){
		return this->quantity;
	}
	string getmdn(){
		return this->mdn;
	}
	
};
bool cmp(ds a, ds b){
	if(a.getquantity()==b.getquantity()){
		return a.getmdn()<b.getmdn();
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
	int t; cin>>t;
	while(t--){
		int c,b; cin>>c>>b;
		cout<<"DANH SACH DOANH NGHIEP NHAN TU "<<c<<" DEN "<<b<<" SINH VIEN:"<<endl;
		for(int i=0; i<n; i++){
			if(c<=a[i].getquantity() && b>=a[i].getquantity()){
				cout<<a[i];
			}
		}
		cout<<endl;
	}
}
