#include <bits/stdc++.h>
using namespace std;
class ds{
private:
	string ten,date;
public:
	friend istream &operator>>(istream &in, ds &a){
		in>>a.ten>>a.date;
		return in;
	}
	friend ostream &operator<<(ostream &out, ds a){
		out<<a.ten<<endl;
		return out;
	}
	string getdate(){
		return this->date;
	}
};
bool cmp(ds a, ds b){
	string nam1= a.getdate().substr(6,4);
	string nam2= b.getdate().substr(6,4);
	string thang1= a.getdate().substr(3,2);
	string thang2= b.getdate().substr(3,2);
	string ngay1= a.getdate().substr(0,2);
	string ngay2= b.getdate().substr(0,2);
	if(nam1==nam2){
		if(thang1==thang2){
			return ngay1<ngay2;
		}
		return thang1<thang2;
	}
	return nam1<nam2;
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
	cout<<a[n-1];
	cout<<a[0];
}
