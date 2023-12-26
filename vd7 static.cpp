#include <bits/stdc++.h>
using namespace std;
class sinhvien{
private:
	string ten;
	static int soLuong;
public:
    sinhvien(string ten){
    	++soLuong;
    	this->ten=ten;
	}	
	int getSoluong(){
		return soLuong;
	}
};
int sinhvien::soLuong = 0;
int main(){
	sinhvien a("teo");
	cout <<a.getSoluong()<<endl;
	sinhvien b("ty");
	cout << b.getSoluong()<<endl;
	cout << a.getSoluong()<<endl;
}
