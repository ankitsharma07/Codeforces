#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);

	string p;
	cin >> p;

	for (int i=0; i<p.length(); i++){
		if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9'){
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
}