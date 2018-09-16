#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(false);
	
	int l=0;
	string s;
	cin >> s;

	for(int i=1; i<s.length(); i++){
		if(s[i] < 91){
			l++;
		}
	}

	if(l == s.length()-1){
		for(int i = 1; i<s.length(); i++){
			s[i] = s[i] + 32;
		}
	}
	if(l == s.length()-1){
		if(s[0] > 96){
			s[0] = s[0] - 32;
		}
		else{
			s[0]+=32;
		}
	}

	cout << s << endl;
	
return 0;
}