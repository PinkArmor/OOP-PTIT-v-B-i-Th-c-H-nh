#include <bits/stdc++.h>
using namespace std;
class person{
private:
	string ten, ngaysinh, diachi;
public:
	person(string ten, string ngaysinh, string diachi){
		this->ten=ten;
		this->ngaysinh=ngaysinh;
		this->diachi=diachi;
	}
	void chuanhoa(){
		stringstream ss(this->ten);
		string tmp, res;
		while(ss>>tmp){
			res += toupper(tmp[0]);
			for(int j=1; j<tmp.size(); j++){
				res+= tolower(tmp[j]);
			}
			res += " ";
		}
		res.pop_back();
		this->ten=res;
		if(this->ngaysinh[1]=='/') this->ngaysinh.insert(0,1,'0');
		if(this->ngaysinh[4]=='/') this->ngaysinh.insert(3,1,'0');
		
	}
	void in(){
		cout<<this->ten<<" "<<this->ngaysinh<<" "<<this->diachi<<" ";
	}
};
class student : public person{
private:
	string ma, lop;
	double gpa;
public:
	student(string ten, string ngaysinh, string diachi, string ma, string lop, double gpa) : person(ten, ngaysinh, diachi){
		this->ma=ma;
		this->lop=lop;
		this->gpa=gpa;
	}
	void in(){
		cout<<this->ma<<" ";
		person::in();
		cout<<this->lop<<" ";
		cout<<fixed<<setprecision(2)<<this->gpa<<endl;
	}
};
int main(){
	int n; cin>>n;
	vector<student> v;
	for(int i=0; i<n; i++){
		cin.ignore();
		string ten; getline(cin,ten);
		string s; getline(cin,s);
		string lop; getline(cin,lop);
		double gpa; cin>>gpa;
		int idx=-1;
		for(int j=0; j<s.size(); j++){
			if(isalpha(s[j])){
				idx=j;
				break;
			}
		}
		string ngaysinh= s.substr(0,idx);
		string diachi= s.substr(idx);
		string ma = to_string(i+1);
		while(ma.size()<4) ma="0"+ma;
		student st(ten,ngaysinh,diachi,ma,lop,gpa);
		v.push_back(st);
	}
	for(student x:v){
		x.in();
	}
}
