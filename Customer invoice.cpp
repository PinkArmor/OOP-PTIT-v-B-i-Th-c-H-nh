#include <bits/stdc++.h>
using namespace std;
class Customer{
private:
	int id;
	string name;
	double discount;
public:
	friend istream &operator>>(istream &in, Customer &a){
		in>>a.id;
		scanf("\n");
		getline(in,a.name);
		in>>a.discount
		return in;
	}
	friend ostream &operator<<(ostream &out, Customer a){
		out<<a.id<<" "<<a.name<<" ";
		return out;
	}
};
class Invoice : Customer{
private:
	int id;
	double amout;
	
};
