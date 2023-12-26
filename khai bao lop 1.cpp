#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string ten,lop,date;
		double gpa;
	public:
		SinhVien(){
		}
		void nhap(){
			getline(cin,ten);
			cin>>lop;
			cin>>date>>gpa;
		}
		void xuat(){
			if(date[1]=='/') date.insert(0,1,'0');
			if(date[4]=='/') date.insert(3,1,'0');
			cout<<"B20DCCN001 ";
			cout<<ten<<" "<<lop<<" "<<date<<" "<<fixed<<setprecision(2)<<gpa<<endl;
		}
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
