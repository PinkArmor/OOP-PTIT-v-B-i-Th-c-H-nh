#include <bits/stdc++.h>
using namespace std;
class thisinh{
	private:
		string name;
		string date;
		double d1,d2,d3;
	public:
		void nhap(){
			getline(cin,this->name);
			cin>> this->date;
			cin >> d1 >> d2 >> d3;
		}
		void in(){
			cout << name << " "<< date <<" "<<fixed<<setprecision(2)<<d1+d2+d3<<endl;
		}
};
int main(){
	thisinh s;
	s.nhap();
	s.in();
}

