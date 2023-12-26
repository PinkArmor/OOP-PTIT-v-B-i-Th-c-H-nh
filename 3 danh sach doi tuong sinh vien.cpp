#include <bits/stdc++.h>
using namespace std;
int b=1;
void thuong(string &s){
	for(int i=0; i<s.size(); i++){
		s[i] = tolower(s[i]);
	}
}
class SinhVien{
private:
	string msv,ten,lop,date;
	double gpa;
public:
	friend istream &operator>>(istream &in, SinhVien &a){
		if(b<10) a.msv="B20DCCN00";
		else a.msv="B20DCCN0";
		a.msv=a.msv+to_string(b);
		++b;
		in.ignore(1,'\n');
		getline(in,a.ten);
		in>>a.lop>>a.date>>a.gpa;
		return in;
	}
	friend ostream &operator<<(ostream &out, SinhVien a){
		if(a.date[1]=='/') a.date.insert(0,1,'0');
		if(a.date[4]=='/') a.date.insert(3,1,'0');
		thuong(a.ten);
        stringstream ss(a.ten);
        string tmp;
        vector<string> v;
        while(ss>>tmp){
        	v.push_back(tmp);
		}
	    for(int i=0; i<v.size(); i++){
	    	v[i][0]= toupper(v[i][0]);
		}
		out<<a.msv<<" ";
		for(int i=0; i<v.size(); i++){
			out<<v[i]<<" ";
		}
		out<<a.lop<<" "<<a.date<<" ";
		out<<fixed<<setprecision(2)<<a.gpa<<endl;
		return out;
	}
	double getgpa(){
		return this->gpa;
	}
	
};
bool cmp(SinhVien a, SinhVien b){
	return a.getgpa()>b.getgpa();
}
void sapxep(SinhVien a[], int n){
	sort(a,a+n,cmp);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
