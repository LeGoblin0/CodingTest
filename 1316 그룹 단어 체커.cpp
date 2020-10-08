#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int cnt = 0;
string str;
int i, n = 0;
void check(string a) {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] != str[i + 1]) {
			for (int j = i + 2; j < str.size(); j++) {
				if (str[j] == str[i]) {
					return;
				}
			}
		}
	}
	cnt++;
}
int main() {
	
	cin >> n;
	
	for (i = 0; i < n; i++) {
		cin >> str;
		check(str);
	}
	cout << cnt;
	return 0;
}
