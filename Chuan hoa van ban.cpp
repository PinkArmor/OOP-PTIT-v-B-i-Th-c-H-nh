#include <bits/stdc++.h>
using namespace std;
void chuanhoa(string &s){
	stringstream ss(s);
	string tmp;
	string res="";
	while(ss>>tmp){
		for(int i=0; i<tmp.size(); i++){
			tmp[i]=tolower(tmp[i]);
		}
		res+=res+tmp+" ";
	}
	res[0]=toupper(res[0]);
	res.pop_back();
	s=res;
}
int main(){
	string s;
	vector<string> v;
	while(getline(cin,s)){
		string tmp="";
		for(int i=0; i<s.size(); i++){
			if(s[i]=='.' || s[i]=='!' || s[i]=='?'){
				chuanhoa(tmp);
				tmp=tmp+s[i];
				v.push_back(tmp);
				tmp="";
			}
			else tmp+=s[i];
		}
		if(tmp!=""){
			chuanhoa(tmp);
			v.push_back(tmp+'.');
		}
	}
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
}
