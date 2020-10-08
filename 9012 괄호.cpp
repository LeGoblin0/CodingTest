#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int t = 0;
	cin >> t;
	cin.ignore();
	while (t--) {
		stack<char> st;
		string str;
		cin >> str;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == ')') {
				if (!st.empty() && st.top() == '(') {
					st.pop();
				}
				else {
					st.push(str[i]);
				}
			}
			else {
				st.push(str[i]);
			}


		}if (st.empty()) cout << "YES" << "\n";
		else cout << "NO" << "\n";

	}
	return 0;
}