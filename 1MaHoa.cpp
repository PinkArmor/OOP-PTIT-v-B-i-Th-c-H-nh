#include <bits/stdc++.h>
using namespace std;
int main(){	
    string s;
	getline(cin,s);
	for(int i=0; i<s.size(); i++){
		if(s[i]==toupper(s[i])){
			if(s[i]!='Y' && s[i]!='Z' && isalpha(s[i])){
				s[i]+=2;
			}
			if(s[i]=='Y'){
				s[i]='A';
			}
			if(s[i]=='Z'){
				s[i]='B';
			}
		}
		else if(s[i]==tolower(s[i])){
			if(s[i]!='a' && s[i]!='b' && isalpha(s[i])){
				s[i]-=2;
			}
			if(s[i]=='a'){
				s[i]='y';
			}
			if(s[i]=='b'){
				s[i]='z';
			}
		}
	}
	cout<<s;
}

