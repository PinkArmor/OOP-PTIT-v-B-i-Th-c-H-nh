#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m; cin>>n>>m;
	map<int,int> mp;
	int a[n];
	int max_val=-1e9;
	for(int i=0; i<n; i++){
		cin>>a[i];
		mp[a[i]]++;
		max_val= max(max_val, mp[a[i]]);
	}
	int second_val=-1e9;
	int ans=0;
	for(int i=0; i<n; i++){
		if(mp[a[i]] != max_val && mp[a[i]] > second_val){
			second_val = mp[a[i]];
			ans=a[i];
		}
	}
	if(ans!=0){
		cout<<ans<<endl;
	}
	else cout<<"NONE\n";
}
