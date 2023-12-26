#include <bits/stdc++.h>
using namespace std;
int b=1;
class NhanVien{
private:
	string ten,sex,id;
	string date,ad,thue,hd;
public:
	friend istream &operator >> (istream &in, NhanVien &a){
		if(b<10) a.id="0000";
		else a.id="000";
		a.id=a.id+to_string(b);
		++b;
		in.ignore();
		getline(in,a.ten);
		in>>a.sex>>a.date;
		in.ignore();
		getline(in,a.ad);
		in>>a.thue>>a.hd;
		return in;
	}
	friend ostream &operator << (ostream &out, NhanVien &a){
		
		out<<a.id<<" "<<a.ten<<" "<<a.sex<<" "<<a.date<<" ";
		out<<a.ad<<" "<<a.thue<<" "<<a.hd<<endl;
		return out;
	}
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
