#include <bits/stdc++.h>
using namespace std;
class KhachHang;
class MatHang;
class HoaDon;
map <string,KhachHang> KH;
map <string,MatHang> MH;
int b=1, c=1, d=1;
class KhachHang{
public:
	string mkh, tkh, sex, date, add;
public:
	friend class HoaDon;
	friend istream &operator>>(istream &in, KhachHang &a){
		if(b<10) a.mkh="KH00";
		else a.mkh="KH0";
		a.mkh=a.mkh+to_string(b);
		++b;
		scanf("\n");
		getline(in,a.tkh);
		getline(in,a.sex);
		getline(in,a.date);
		getline(in,a.add);
		KH[a.mkh]=a;
		return in;
	}
};
class MatHang{
public:
	string mmh, tmh, dvi;
	long long mua, ban;
public:
	friend istream &operator>>(istream &in, MatHang &a){
		if(c<10) a.mmh="MH00";
		else a.mmh="MH0";
		a.mmh=a.mmh+to_string(c);
		++c;
		scanf("\n");
		getline(in,a.tmh);
		getline(in,a.dvi);
	    in>>a.mua>>a.ban;
	    MH[a.mmh]=a;
		return in;
	}
};
class HoaDon{
private:
	string mhd, mkh, mmh;
	long long sl, lnh;
public:
	friend istream &operator>>(istream &in, HoaDon &a){
		if(d<10) a.mhd="HD00";
		else a.mhd="HD0";
		a.mhd=a.mhd+to_string(d);
		++d;
		in>>a.mkh>>a.mmh>>a.sl;
		a.lnh=MH[a.mmh].ban*a.sl - MH[a.mmh].mua*a.sl;
		return in;
	}
	friend ostream &operator<<(ostream &out, HoaDon &a){
		out<<a.mhd<<" "<<KH[a.mkh].tkh<<" "<<KH[a.mkh].add<<" ";
		out<<MH[a.mmh].tmh<<" "<<a.sl<<" ";
		out<<MH[a.mmh].ban*a.sl<<" "<<a.lnh<<endl;
	}
	long long getlnh(){
		return this->lnh;
	}
};
bool cmp(HoaDon a, HoaDon b){
	return a.getlnh()>b.getlnh();
}
void sapxep(HoaDon a[], int n){
	sort(a,a+n,cmp);
}
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
