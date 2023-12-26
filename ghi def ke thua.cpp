#include <bits/stdc++.h>
using namespace std;
class person{
private:
	string name, birth, address;
public:
	person(string name, string birth, string address){
		this->name=name;
		this->birth=birth;
		this->address=address;
	}
	void in(){
		cout << this->name<<" "<<this->birth<<" "<<this->address<<" ";
	}
};
class student : public person{
private:
	double gpa;
public:
	student(string name, string birth, string address, double gpa) : person(name, birth, address){
		this->gpa=gpa;
	}
	void in(){
		person::in();
		cout<<fixed<<setprecision(2)<<this->gpa;
	}
};
int main(){
	student s("Teo", "22/12/2002", "Hai duong",3.8);
	s.in();
}
