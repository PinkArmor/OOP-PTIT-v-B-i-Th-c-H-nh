#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll sum(ll a, ll b){
	ll n = b-a+1;
	return n*(b+a)/2;
}
int main(){
	int n; cin>>n;
	ll tong=0;
	ll k=n/2;
	ll left=pow(10,k-1);
	ll right=pow(10,k)-1;
	ll tmp=pow(10,k-1)-1;
	if(n%2==0){
		tong=sum(left,right)*pow(10,k)+sum(1,right)-sum(1,tmp)*10;
	}
	else{
		tong=sum(left*10,right*10+9)*pow(10,k)+(sum(1,right)-sum(1,tmp)*10)*10;
	}
//    if(n==10){
//    	cout<<"hihi";
//	}
//	else cout<<tong;
    cout<<tong;
}
//n=5 tong=49500000
//n=6 tong=495000000
//n=7 tong=49500000000
//n=8 tong=49500 00 00 00 0
//n=9 tong=49500000000000
//n=10tong=495000000000000
