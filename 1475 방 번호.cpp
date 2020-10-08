#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string s;
	int a[10] = {0};
	int cnt = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '6' || s[i] == '9') {
			a[6]++;
			cnt = max(cnt, (a[6]) / 2 + a[6] % 2);
		}
		else {
			a[s[i] - '0']++;
			cnt = max(cnt, a[s[i] - '0']);
		}
	}
	cout << cnt;
	return 0;
}
