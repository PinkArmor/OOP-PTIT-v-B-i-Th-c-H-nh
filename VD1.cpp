#include <bits/stdc++.h>
using namespace std;
class sinhvien{
	//attribute : private
	private:
	 int *diem;
	 string msv;
	 string ten;
	 double gpa;
	 //double *diem;
	//method : public
	public:
	sinhvien(){ //ham taoj
		cout <<"Ham khoi tao se dc goi neu khai bao 1 doi tuong\n";
	}
	sinhvien(string msv, string ten, double gpa){
		this->msv = msv;
		this->ten = ten;
		this->gpa = gpa;
		//diem = new double [10];
	}
	void xinchao(){
		cout << "sinh vien xin chao\n";
	}
	void nhap(){
		this->xinchao();
		getline(cin,msv);
		getline(cin,ten);
		cin >> this->gpa;
	}
	void in(){
		cout << this->msv << " "<<this->ten<<" "<<this->gpa<<endl;
	}
	~sinhvien(){
		cout << "giai phong doi tuong\n";
		delete[]diem;
	}
};
class sinhvien1{
	private:
		string msv;
		string ten;
		double gpa;
	public:
	void setTen(string ten){
		this->ten= ten;
	}
	double getgpa(double gpa){
		return this->gpa;
	}
	void nhap(){
		getline(cin,msv);
		getline(cin,ten);
		cin >> this->gpa;
	}
	void in(){
		cout << this->msv << " "<<this->ten<<" "<<this->gpa<<endl;
	}	
};
int main(){
	sinhvien s("12345", "nguyen van teo", 3.9);
	//s.diem = new int [10];
	
}
