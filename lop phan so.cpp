#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
	while(b){
		long long r = a%b;
		a=b;
		b=r;
	}
	return a;
}
class PhanSo{
	private:
		long long tu,mau;
	public:
		PhanSo(){
		}
		PhanSo(long long tu, long long mau){
			this->tu = tu;
			this->mau = mau;
		}
		friend istream & operator >>(istream &in, PhanSo &a){
			in>>a.tu>>a.mau;
			return in;
		}
		void rutgon(){
			long long k = gcd(tu,mau);
			tu /= k;
			mau /=k;
		}
		friend ostream & operator <<(ostream &out,PhanSo a){
			out<<a.tu<<"/"<<a.mau;
			return out;
		}
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
