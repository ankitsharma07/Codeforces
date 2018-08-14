//problem statement - http://codeforces.com/problemset/problem/71/A

#include <iostream>
using namespace std;

int main(){
	int n, length;

	cin >> n;

	while(n--) {
		string s;
		cin >> s;

		length = s.length();

		if(length <= 10) {
			cout << s << endl;
		}
		else if(length > 10) {
			cout << s[0] << length - 2 << s[length-1] <<endl;
		}
	}
}