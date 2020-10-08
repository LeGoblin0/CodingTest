#include <iostream>
#include <stack>
using namespace std;
int main() {
	int k, n, cnt = 0;
	cin >> k;
	stack<int> st;
	for (int i = 0; i < k; i++) {
		cin >> n;
		if (n == 0) {
			st.pop();
		}
		else {
			st.push(n);
		}
	}
	for(int i = 0; !st.empty(); i++){
		cnt += st.top();
		st.pop();
	}
	cout << cnt << endl;
	return 0;
}