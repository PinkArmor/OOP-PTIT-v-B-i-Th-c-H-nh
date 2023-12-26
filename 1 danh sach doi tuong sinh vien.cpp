#include <bits/stdc++.h>
using namespace std;
int b=1;
class SinhVien{
private:
    string ten,lop,date;
    string id;
	double gpa;
public:
    friend istream & operator >> (istream &in,SinhVien &a){
    	cin.ignore();
		getline(in,a.ten);
    	in>>a.lop>>a.date>>a.gpa;
    	return in;
	}	
	friend ostream & operator << (ostream &out,SinhVien &a){
		if(a.date[1]=='/') a.date.insert(0,1,'0');
	    if(a.date[4]=='/') a.date.insert(3,1,'0');
	    if(b<10) a.id="B20DCCN00";
	    else a.id="B20DCCN0";
	    a.id=a.id+to_string(b);
	    out<<a.id<<" ";
	    ++b;
	    out<<a.ten<<" "<<a.lop<<" "<<a.date<<" ";
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
