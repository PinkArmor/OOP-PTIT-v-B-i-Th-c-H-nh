#include <bits/stdc++.h>
using namespace std;
map<string,int> mp;
int solve (string s){
	int ans=0; 
	for(int i=0; i<s.size(); i++){
		if(isalpha(s[i])){
			string nt="";
			while(i<s.size() && isalpha(s[i])){
				nt+=s[i];
				++i;
			}
			int cnt=0;
			while(i<s.size() && isdigit(s[i])){
				cnt = cnt*10 +(s[i]-'0');
				++i;
			}
			ans += mp[nt] * cnt;
			--i;
		}
	}
	return ans;
}
int main(){
	for(int i=1; i<=10; i++){
		string s;
		int x;
		cin>>s>>x;
		mp[s]=x;
	}
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<solve(s)<<endl;
	}
}
