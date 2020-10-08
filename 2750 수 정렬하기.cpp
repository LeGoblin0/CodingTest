#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N, M;
	int a[1000];
		cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	sort(a,a+N);
	for (int i = 0; i < N; i++) {
		cout << a[i] << endl;
	}
	return 0;
}