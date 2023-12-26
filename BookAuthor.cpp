#include <bits/stdc++.h>
using namespace std;
class Author{
private:
	string mail, name, gender;
public:
	Author(){
	}
	Author(string mail, string name, string gender){
		this->mail=mail;
		this->name=name;
		this->gender=gender;
	}
	void display(){
		cout<<"Name : "<<this->name<<endl;
		cout<<"Email : "<<this->mail<<endl;
		cout<<"Gender : "<<this->gender<<endl;
	}
};
class Book{
private:
	string name;
	vector<Author> author;
	double price;
	long long qty;
public:
	Book(string name, vector<Author> author, double price, int qyt){
		this->name=name;
		this->author=author;
		this->price=price;
		this->qty=qty;
	}
	string getname(){
		return this->name;
	}
	void bookdisplay(){
		cout<<"-----------------\n";
		cout<<"Book information:\n";
		cout<<"Name : "<<this->name<<endl;
		cout<<"Price : "<<this->price<<endl;
		cout<<"Quantity : "<<this->qty<<endl;
		cout<<"Author information : \n";
		for(int i=0; i<author.size(); i++){
			cout<<"#"<<i+1<<endl;
			author[i].display();
		}
	}
};
bool cmp(Book a, Book b){
	return a.getname()<b.getname();
}
int main(){
	int n; cin>>n;
	cin.ignore();
	vector<Book> a;
	for(int i=0; i<n; i++){
		string tmp; 
		getline(cin,tmp);
		string ten; 
		int qty;
		double price;
		getline(cin,ten);
		cin>>price>>qty;
		vector<Author> v;
		int s1; cin>>s1;
		cin.ignore();
		for(int j=0; j<s1; j++){
			string tentg, mail, gender;
			getline(cin,tentg);
			getline(cin,mail);
			getline(cin,gender);
			Author x(tentg,mail,gender);
			v.push_back(x);
		}
		Book b(ten,v,price,qty);
	}
	sort(a.begin(), a.end(), cmp);
	for(Book x:a){
		cout<<x.bookdisplay();
	}
}
