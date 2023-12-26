#include <bits/stdc++.h>
using namespace std;
class ds{
private:
	long long stt,share,interact;
	double kq;
public:
    friend istream &operator>>(istream &in, ds &a){
		in>>a.stt>>a.share>>a.interact;
		a.kq=0.7*a.share+0.3*a.interact;
		return in;
	} 
    friend ostream &operator<<(ostream &out, ds a){
    	out<<a.stt<<" ";
    	return out;
	}
	double getkq(){
		return this->kq;
	}
	long long getstt(){
		return this->stt;
	}
};
bool cmp(ds a, ds b){
	if(a.getkq()==b.getkq()){
		return a.getstt()<b.getstt();
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
	for(int i=0; i<7; i++){
		cout<<a[i];
	}
}
