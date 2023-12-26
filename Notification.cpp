#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string s;
		getline(cin, s);
		if (s.length() < 100) {
			cout << s << endl;
			continue;
		}
		s += " ";
		int i = 0;
		string s1 = "";
		while (i < 100) {
			s1 += s[i];
			i++;
		}
		if (s[99] != ' ' && s[100] != ' ') {
			int j = 99;
			while (s1[j] != ' ') {
				s1.pop_back();
			    j--;
			}
		}
		cout << s1 << endl;
	}

}
