#include <bits/stdc++.h>
using namespace std;
class Person{
private:
	string name, birth, address;
public:
	Person(string name, string birth, string address){
		this->name=name;
		this->birth=birth;
		this->address=address;
	}
	void in(){
		cout<<this->name<<" "<<this->birth<<" "<<this->address<<" ";
	}
};
class Student : public Person{
private:
	double gpa;
public:
	Student(string name, string birth, string address, double gpa) : Person(name, birth, address){
		this->gpa=gpa;
	}
	//ghi dè : overriding
	void in(){
		Person::in(); //goi ham in trong lop cha
		cout<<fixed<<setprecision(2)<<this->gpa;
	}
};
int main(){
	Student s("Teo", "22/12/2002", "Nghe An", 3.8);
	s.in();
}
