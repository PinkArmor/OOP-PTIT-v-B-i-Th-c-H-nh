#include <bits/stdc++.h>
#include <fstream>
using namespace std;

ofstream out("nhanvien.dat");

struct nv{
	string mnv,ten;
	double hs,lcb,pc,tong;
};
void nhap(nv a[]){
	
	for(int i=0; i<2; i++){
		cin>>a[i].mnv>>a[i].ten>>a[i].hs>>a[i].lcb>>a[i].pc;
		out<<a[i].mnv << endl;
		//out.ignore();
		out<<a[i].ten << endl;
		out<<a[i].hs << endl;
		out<<a[i].lcb<<endl;
		out<<a[i].pc<<endl;
      }
}
void lin(){
	ifstream in("nhanvien.dat");
	string s;
	while(in >> s){
		cout << s << endl;
	}	
	in.close();
	    
//       in>>b.mnv>>" ">>b.ten>>" ">>b.hs>>b.lcb>>b.pc;
//       b.tong =  b.hs*b.lcb+b.pc;
//    	cout <<b.mnv<<" "<< b.tong<<endl; 
	}
}
int main(){
	nv a[3];
	nhap(a);
	lin();
}



