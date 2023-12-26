#include <bits/stdc++.h>
using namespace std;
struct Zodiac{
	int startMonth;
	int startDay;
	int endMonth;
	int endDay;
	string name;
};
int main(){
	vector<Zodiac> zodiacs={
	   {3,21,4,19,"Bach Duong"},
	   {4,20,5,20,"Kim Nguu"},
	   {5,21,6,20,"Song Tu"},
	   {6,23,7,22,"Cu Giai"},
	   {7,23,8,22,"Su Tu"},
	   {8,23,9,22,"Xu Nu"},
	   {9,23,10,22,"Thien Binh"},
	   {10,23,11,22,"Thien Yet"},
	   {11,23,12,21,"Nhan Ma"},
	   {12,22,1,19,"Ma Ket"},
	   {1,20,2,18,"Bao Binh"},
	   {2,19,3,20,"Song Ngu"}
	};
	int t; cin>>t;
	while(t--){
		int d,m;
		cin>>d>>m;
		for(auto it: zodiacs){
			if((m==it.startMonth && d>=it.startDay) || (m==it.endMonth && d<=it.endDay)){
				cout<<it.name<<endl;
				break;
			}
		}
	}
}
