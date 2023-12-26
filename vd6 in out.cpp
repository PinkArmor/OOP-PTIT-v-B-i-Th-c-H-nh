#include <bits/stdc++.h>
using namespace std;
class sophuc{
	private:
		int thuc,ao;
	public:
		sophuc(){}
		sophuc (int thuc, int ao){
			this->thuc=thuc;
			this->ao=ao;
		}
		friend ostream & operator << (ostream &out, sophuc a){
			out<<a.thuc<<" "<<a.ao<<endl;
			return out;
		}
		friend istream & operator >> (istream &in, sophuc &a){
			in >> a.thuc >> a.ao;
			return in;
		}
};
int main(){
	sophuc a;
	cin >> a;
	cout << a;
}
