#include <bits/stdc++.h>
using namespace std;
class ds{
private:
	int gio,phut,giay;
public:
	friend istream &operator>>(istream &in, ds &a){
		in>>a.gio>>a.phut>>a.giay;
		return in;
	}
	friend ostream &operator<<(ostream &out, ds a){
		out<<a.gio<<" "<<a.phut<<" "<<a.giay<<endl;
		return out;
	}
	int getgio(){
		return this->gio;
	}
	int getphut(){
		return this->phut;
	}
	int getgiay(){
		return this->giay;
	}
};
bool cmp(ds a, ds b){
	if(a.getgio()==b.getgio()){
		if(a.getphut()==b.getphut()){
			return a.getgiay()<b.getgiay();
		}
		return a.getphut()<b.getphut();
	}
	return a.getgio()<b.getgio();
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
