#include <bits/stdc++.h>
using namespace std;
int b=1;
class NhanVien{
private:
	string id,ten,sex,date;
	string add,tax,hd;
public:
	friend istream &operator>>(istream &in,NhanVien &a){
		if(b<10) a.id="0000";
		else a.id="000";
		a.id= a.id+to_string(b);
		++b;
		in.ignore();
		getline(in,a.ten);
		in>>a.sex>>a.date;
		in.ignore();
		getline(in,a.add);
		in>>a.tax>>a.hd;
		return in;
	}
	friend ostream &operator<<(ostream &out,NhanVien a){
		out<<a.id<<" "<<a.ten<<" "<<a.sex<<" "<<a.date<<" ";
		out<<a.add<<" "<<a.tax<<" "<<a.hd<<endl;
		return out;
	}
	string getdate(){
		return this->date;
	}
};
bool cmp(NhanVien a,NhanVien b){
	string nam1=a.getdate().substr(6,4);
	string nam2=b.getdate().substr(6,4);
	string thang1=a.getdate().substr(0,2);
	string thang2=b.getdate().substr(0,2);
	string ngay1=a.getdate().substr(3,2);
	string ngay2=b.getdate().substr(3,2);
	if(nam1==nam2){
		if(thang1==thang2){
			return ngay1<ngay2;
		}
		return thang1<thang2;
	}
	return nam1<nam2;
}
void sapxep(NhanVien a[], int n){
	sort(a,a+n,cmp);
}
int main(){
    int n; cin>>n;
    NhanVien a[n];
    for(int i=0; i<n; i++){
    	cin>>a[i];
	}
	sapxep(a,n);
	for(int i=0; i<n; i++){
		cout<<a[i];
	}
    return 0;
}
