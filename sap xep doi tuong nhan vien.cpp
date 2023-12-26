#include <bits/stdc++.h>
using namespace std;
int b=1;
class NhanVien{
private:
	string id,ten,sex,date,ad,thue,hd;
public:
	friend istream &operator>>(istream &in, NhanVien &a){
		if(b<10) a.id="0000";
		else a.id="000";
		a.id=a.id+to_string(b);
		++b;
		in.ignore();
		getline(in,a.ten);
		getline(in,a.sex);
		getline(in,a.date);
		getline(in,a.ad);
		getline(in,a.thue);
	    in>>a.hd;
		return in;
	} 
	friend ostream &operator<<(ostream &out, NhanVien a){
		out<<a.id<<" "<<a.ten<<" "<<a.sex<<" "<<a.date<<" ";
		out<<a.ad<<" "<<a.thue<<" "<<a.hd<<endl;
		return out;
	}
	string getdate(){
		return this->date;
	}
};
bool cmp(NhanVien a, NhanVien b){
	string n1= a.getdate().substr(6,4);
	string n2= b.getdate().substr(6,4);
	string ng1= a.getdate().substr(3,2);
	string ng2= b.getdate().substr(3,2);
	string t1= a.getdate().substr(0,2);
	string t2= b.getdate().substr(0,2);
	if(n1==n2){
		if(t1==t2) return ng1<ng2;
		return t1<t2;
	}
	return n1<n2;
}
void sapxep(NhanVien a[], int n){
	sort(a,a+n,cmp);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
