#include <bits/stdc++.h>
using namespace std;
//struct ds{
//	double toan,tv,anh,ly,hoa,sinh,ls,dia,gdcd,cn;
//};
int b=1;
class ds{
private:
    string id;
	double toan,tv,anh,ly,hoa,sinh,ls,dia,gdcd,cn;
	string ten;
	double tong;
public:
	friend istream &operator>>(istream &in, ds &a){
		if(b<10) a.id="HS0";
		else a.id="HS";
		a.id=a.id+to_string(b);
		++b;
		in.ignore();
		getline(in,a.ten);
		in>>a.toan>>a.tv>>a.anh>>a.ly>>a.hoa>>a.sinh>>a.ls>>a.dia>>a.gdcd>>a.cn;
		a.tong=(2.0*a.toan+2*a.tv+a.anh+a.ly+a.hoa+a.sinh+a.ls+a.dia+a.gdcd+a.cn) / 12.0;
		return in;
		
	}
	friend ostream &operator<<(ostream &out, ds a){
		out<<a.id<<" "<<a.ten<<" ";
		out<<fixed<<setprecision(1)<<a.tong<<" ";
		
		if(a.tong>=9) out<<"XUAT SAC\n";
		if(a.tong>=8 && a.tong<=8.9) out<<"GIOI\n";
		if(a.tong>=7 && a.tong<=7.9) out<<"KHA\n";
		if(a.tong>=5 && a.tong<=6.9) out<<"TB\n";
		if(a.tong<5) out<<"YEU\n";
		
		return out;
	}
	double gettong(){
		return this->tong;
	}
	string getid(){
		return this->id;
	}
};
bool cmp (ds a, ds b){
	if(a.gettong()==b.gettong()){
		return a.getid()<a.getid();
	}
	return a.gettong()>b.gettong();
}
void sapxep(ds a[], int n){
	sort(a,a+n, cmp);
	
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
