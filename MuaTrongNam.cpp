#include <bits/stdc++.h>
using namespace std;
bool LeapYear(int year){
	return (year%4==0 && year%100!=0) || (year%400==0);
}
string getSeason(string &location, int year, int day){
	if(location=="Bac"){
		if(LeapYear(year)){
			if(day>=1 && day<=31) return "Dong";
			else if(day>31 && day<=121) return "Xuan";
			else if(day>120 && day<=212) return "He";
			else if(day>212 && day<=304) return "Thu";
			else return "Dong";
		}
		else{
			if(day>=1 && day<=31) return "Dong";
			else if(day>31 && day<=120) return "Xuan";
			else if(day>120 && day<=212) return "He";
			else if(day>212 && day<=304) return "Thu";
			else return "Dong";
		}
	}
	if(location=="Nam"){
		if(LeapYear(year)){
			if(day>=1 && day<=121) return "Kho";
			else return "Mua";
		}
		else{
			if(day>=1 && day<=120) return "Kho";
			else return "Mua";
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		string location;
		cin>>location;
		int year, day;
		cin>>year>>day;
		cout<<getSeason(location,year,day)<<endl;
	}
}
