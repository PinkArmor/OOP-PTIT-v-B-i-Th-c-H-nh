#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		stringstream ss(s);
		string tmp;
		vector<string> v;
		int cnt=0;
		bool check=true;
		while(getline(ss,tmp,'.')){
			++cnt;
			long long num=0;
			for(char c:tmp){
				if(!isdigit(c)){
					check=false;
				}
				else{
					num = num*10+c-'0';
				}
			}
			if(num<0 || num>255) check=false;
			if(check==false) break;
		}
		if(check && cnt==4) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
