#include <bits/stdc++.h>
using namespace std;

int main(){
	int p, q, n, count = 0;

	cin >> n;

	while(n--){
		cin >> p >> q;
		if(q > p && (q-p) >= 2){
			count++;
		}
	}
	cout << count << endl;

	return 0;
}