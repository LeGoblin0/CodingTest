#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int t = 0;
	cin >> t;
	cin.ignore();
	while (t--) {
		string str = "";
		getline(cin, str);
		str += ' ';
		stack<char> st;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == ' ') {
				while (!st.empty()) {
					cout << st.top();
					st.pop();
				}
				cout << str[i];
			}
			else st.push(str[i]);
		}
	}
	return 0;
}