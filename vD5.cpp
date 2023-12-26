#include <bits/stdc++.h>
using namespace std;
class sophuc{
	private:
		int thuc, ao;
	public:
		sophuc(int thuc, int ao){
			this->thuc = thuc;
			this->ao = ao;
		}
		/*/sophuc operator + (sophuc b){
			sophuc kq(0,0);
			kq.thuc = this->thuc + b.thuc;
			kq.ao = this->ao + b.ao;
			return kq;
		}/*/
		friend sophuc operator + (sophuc a, sophuc b){
			sophuc kq(0,0);
			kq.thuc = a.thuc + b.thuc;
			kq.ao = a.ao + b.ao;
			return kq;
		}
		friend bool operator == (sophuc a, sophuc b){
			return a.thuc == b.thuc && a.ao == b.ao;
		}
		void in(){
			cout << thuc <<" "<<ao<<endl;
		}
};
int main(){
	sophuc a(2,5) , b(3,7);
	//a = a+b;
	//a.in();
	sophuc kq = a+b;
	kq.in();
}
