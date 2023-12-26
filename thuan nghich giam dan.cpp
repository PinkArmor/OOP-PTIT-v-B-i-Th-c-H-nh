#include<bits/stdc++.h>

using namespace std;

class so {
private:
    string s;

public:
    friend istream &operator>>(istream &in, so &a) {
        getline(in,a.s);
        return in;
    }

    friend ostream &operator<<(ostream &out, so a) {
        out << a.s << endl;
        return out;
    }

    string gets() {
        return this->s;
    }
};

bool check(string s) {
    int n = s.size();
    for (int i = 0; i <= n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

bool cmp(string a, string b) {
    if(a.size()==b.size()){
        return a>b;
    }
    return a.size()>b.size();
}
bool check1(vector<string> v){
    int n=v.size();
    for(int i=1; i<n; i++){
        if(v[i]==v[i-1]){
            return false;
        }
    }
    return true;
}
int main() {
    so a;
    cin >> a; 
	string a1 = a.gets();
    stringstream ss(a1);
    string tmp;
    vector<string> v;
    
    while (ss >> tmp) {
        v.push_back(tmp);
    }
    int cnt=0;
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++) {
        if(v[i].size()==1) continue;
		if (check(v[i]) && v[i] != v[i+1]) {
            cout<<v[i]<<" ";
            ++cnt;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

