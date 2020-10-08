#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
	int x, y, n;
	cin >> n;
	

	vector<pair<int, int>> v;
	
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.push_back({ x, y });
	}

	for (int i = 0; i < v.size(); i++) {
		int cnt = 1;
		for (int j = 0; j < v.size(); j++) {
			if (v[i].first < v[j].first && v[i].second < v[j].second) {
				cnt++;
			}
		}cout << cnt << ' ';
	}
	cout << endl;
	return 0;
}
