#include <bits/stdc++.h>
using namespace std;
string Do(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
    }
    return s;
}
int main(){
    freopen("VANBAN.in","r",stdin);
	string s;
    map <string,int> a;
    while(cin>>s){
        a[Do(s)]++;
    }
    for(auto i:a){
        cout<<i.first<<endl;
    }
}
