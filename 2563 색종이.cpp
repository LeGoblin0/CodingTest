#include <iostream>
using namespace std;
int main() {
	int arr[101][101] = {0};
	int t;
	int cnt = 0;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				arr[a + i][b + j] = 1;
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (arr[i][j] == 1)cnt++;
		}
	}
	cout << cnt;
	return 0;
}
