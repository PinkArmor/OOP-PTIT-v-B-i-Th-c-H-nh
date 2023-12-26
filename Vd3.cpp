#include <bits/stdc++.h>
using namespace std;
class sinhvien{
	private:
		string msv, ten, ns, lop;
		double gpa;
	public:
		void nhap(int stt){
			cin.ignore();
			string ma= to_string(stt);
			while(ma.size() < 3){
				ma = "0" + ma;
			}
			msv = "sv" + ma;
			getline(cin,this->ten);
			getline(cin,this->lop);
			getline(cin,this->ns);
			cin >> this->gpa;
		}
		void in(){
			cout <<msv<<" "<<ten<<" "<<lop<<" "<<ns<<" ";
			cout <<fixed<<setprecision(2)<<gpa<<endl;
		}
		void chuanhoa(){
			stringstream ss(ten);
			string tmp, res="";
			while(ss>>tmp){
				res+= toupper(tmp[0]);
				for(int i=1; i< tmp.size(); i++){
					res += tolower(tmp[i]);
				}
				res+= " ";
			}
			res.pop_back();
			this->ten= res;
			if(ns[1]=='/') ns="0" +ns;
			if(ns[4]=='/') ns.insert(3,"0");
		}
		string getMSV(){
			return this->msv;
		}
		double getGpa(){
			return this->gpa;
		}
};
bool cmp(sinhvien a, sinhvien b){
	if(a.getGpa() != b.getGpa()){
		return a.getGpa() > b.getGpa();
	}
	else {
		return a.getMSV() < b.getMSV();
	}
}
int main(){
	int n; cin >> n;
	sinhvien a[n];
	for(int i=0; i<n; i++){
		a[i].nhap(i+1); //stt
		a[i].chuanhoa();
	}
	sort(a,a+n,cmp);
	for(int i=0; i<n; i++){
		a[i].in();
	}
}
