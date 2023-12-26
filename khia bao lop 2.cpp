#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string ten,lop,date;
		double gpa;
	public:
//		SinhVien(){}
//		SinhVien(string ten, string lop, string date, double gpa){
//			this->ten = ten;
//			this->lop = lop;
//			this->date = date;
//			this->gpa = gpa;
//		}
		friend istream & operator >>(istream &in, SinhVien &a){
			getline(in,a.ten);
			in>>a.lop>>a.date>>a.gpa;
			return in;
		}
		friend ostream & operator <<(ostream &out, SinhVien a){
			if(a.date[1]=='/') a.date.insert(0,1,'0');
			if(a.date[4]=='/') a.date.insert(3,1,'0');
			out<<"B20DCCN001 ";
			out<<a.ten<<" "<<a.lop<<" "<<a.date<<" ";
			out<<fixed<<setprecision(2)<<a.gpa<<endl;
			return out;
		}
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
