#include <bits/stdc++.h>
using namespace std;
int a[10000005], n;
int dem[1000];
int main(){
	int n; cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
		dem[a[i]%28]++;
	}
	long long ans=0;
	ans=1ll*dem[0]*(dem[0]-1)/2 +1ll*dem[14]*(dem[14]-1)/2;
	for(int i=1; i<13; i++){
		ans+=1ll*dem[i]*dem[28-i];
	}
	cout<<ans<<endl;
}
