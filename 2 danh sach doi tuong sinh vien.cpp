#include <bits/stdc++.h>
using namespace std;
int b=1;
void thuong(string &a){
	for(int i=0; i<a.size(); i++){
		a[i] = tolower(a[i]);
	}
}
class SinhVien{
private:
	string ten,lop,date,id;
	double gpa;
public:
	friend istream & operator >> (istream &in, SinhVien &a){
		in.ignore();
		getline(in,a.ten);
		in>>a.lop>>a.date>>a.gpa;
		return in;
	}
	friend ostream & operator << (ostream &out, SinhVien a){
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
			v[i][0] = toupper(v[i][0]);
		}
		if(b<10) a.id="B20DCCN00";
		else a.id="B20DCCN0";
		a.id=a.id+to_string(b);
		out<<a.id<<" ";
		++b;
		for(int i=0; i<v.size(); i++){
			out<<v[i]<<" ";
		}
		out<<a.lop<<" "<<a.date<<" ";
		out<<fixed<<setprecision(2)<<a.gpa<<endl;
		return out;
	}
};
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
