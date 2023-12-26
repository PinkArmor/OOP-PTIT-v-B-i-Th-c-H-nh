#include <bits/stdc++.h>
using namespace std;
class person{
private:
	string name, birth, address;
public:
	person(){
		cout << "person constructor\n";
	}
	~person(){
		cout << "person destructor\n";
	}
};
class student : public person{
private:
	double gpa;
public:
	student(){
		cout << "student constructor\n";
	}
	~student(){
		cout << "student destructor\n";
	}
};
int main(){
	student s;
	
}
