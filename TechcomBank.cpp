#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		long long sum=0;
		string ten;
		getline(cin,ten);
		int sl; cin>>sl;
		while(sl--){
		    long long tien;
			cin>>tien;
			if(tien<0) sum+=abs(tien);
			sum+=tien;	
		}
		if(sum>=100000000){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
}
