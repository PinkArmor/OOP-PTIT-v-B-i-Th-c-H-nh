#include <bits/stdc++.h>
using namespace std;
string Do(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
    }
    return s;
}
int main(){
	string s;
	map <string,int> a1,a2,a3;
	ifstream input1,input2;
    input1.open("DATA1.in");
    while(input1>>s){
        s=Do(s);
        a1[s]++;
        a3[s]++;
    }
    input1.close();
    input2.open("DATA2.in");
    while(input2>>s){
        s=Do(s);
        a2[s]++;
        a3[s]++;
    }
    input2.close();
    for(auto i:a3){
        cout<<i.first<<" ";
    }
    cout<<endl;
    for(auto i:a1){
        if(a2[i.first]>0) cout<<i.first<<" ";
    }
}

