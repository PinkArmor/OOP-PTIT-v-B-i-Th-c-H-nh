#include <bits/stdc++.h>
using namespace std;
class sinhvien{
	private:
		string msv,ten;
		double gpa;
	public:
	void nhap(){
		getline(cin,msv);
		getline(cin,ten);
		cin >> gpa;
	}
	friend void display (sinhvien s){
		cout << s.msv<<" "<<s.ten<<" "<<s.gpa<<endl;
	}	
};
int main(){
	sinhvien s;
	s.nhap();
	display(s);
}
