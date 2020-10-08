#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	queue<int> q;
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		string str;
		getline(cin, str);
		if (str == "pop") {
			if (q.empty()) cout << -1 << endl;
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (str == "size") {
			cout << q.size() << endl;
		}
		else if (str == "empty") {
			if (q.empty())cout << 1 << endl;
			else cout << 0 << endl;
		}
		else if (str == "front") {
			if (q.empty()) cout << -1 << endl;
			else {
				cout << q.front() << endl;
			}
		}
		else if (str == "back") {
			if (q.empty()) cout << -1 << endl;
			else {
				cout << q.back() << endl;
			}
		}
		
		else{
			str = str.erase(0, 5);
			int x = stoi(str);
			q.push(x);
		}
	}
	return 0;
}