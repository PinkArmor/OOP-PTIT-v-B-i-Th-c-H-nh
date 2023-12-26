#include <bits/stdc++.h>
using namespace std;
void thuong(string &s){
	for(int i=0; i<s.size(); i++){
		s[i]=tolower(s[i]);
	}
}
int main(){
	int t; cin>>t;
	cin.ignore();
    map<string,int> mp;
	while(t--){
	string s; 
	getline(cin,s);
    int idx=-1;
    for(int i=0; i<s.size(); i++){
    	if(isdigit(s[i])){
    		idx=i;
    		break;
		}
	}
	string ten= s.substr(0,idx);
	string date=s.substr(idx);
	thuong(ten);
	stringstream ss(ten);
	string tmp;
	vector<string> v;
	while(ss>>tmp){
		v.push_back(tmp);
	}
	string res="";
	res+=v[v.size()-1];
	for(int i=0; i<v.size()-1; i++){
		res+=v[i][0];
	}
	if(mp[res]==0){
		cout<<res<<"@xyz.edu.vn"<<endl;
	}
	else {
		cout<<res<<mp[res]+1<<"@xyz.edu.vn"<<endl;
	}
	mp[res]++;
	string res1="";
	for(int i=0; i<date.size(); i++){
		if(date[i]=='/') continue;
		res1+=date[i];
	}
	cout<<res1<<endl;
	}
}
