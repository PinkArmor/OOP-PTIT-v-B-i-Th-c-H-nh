#include <bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string mnv,ten,sex,date,add,thue,hd;
	public:
//		NhanVien(){
//		}
//		NhanVien(string ten, string sex, string date, string add, string thue, string hd){
//			this->ten=ten;
//			this->sex= sex;
//			this->date= date;
//			this->add=add;
//			this->thue=thue;
//			this->hd=hd;
//		}
		friend istream & operator >> (istream &in, NhanVien &a){
			a.mnv="00001";
			getline(in,a.ten);
			getline(in,a.sex);
			getline(in,a.date);
			getline(in,a.add);
			getline(in,a.thue);
			getline(in,a.hd);
			return in;
		}
		friend ostream & operator << (ostream &out, NhanVien &a){
//			if(a.date[1]=='/') a.date.insert(0,1,'0');
//			if(a.date[4]=='/') a.date.insert(3,1,'0');
//			if(a.hd[1]=='/') a.hd.insert(0,1,'0');
//			if(a.hd[4]=='/') a.hd.insert(3,1,'0');
			out<<a.mnv<<" ";
			out<<a.ten<<" "<<a.sex<<" "<<a.date<<" ";
			out<<a.add<<" "<<a.thue<<" "<<a.hd<<endl;
			return out;
		}
};
int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}
