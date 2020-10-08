#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
int N, M;
int in[101][101];
int visit[101][101];
bool check(int y, int x) {
	if (y<1 || y>N || x<1 || x>M)return false;
	if (in[y][x] == 0)return false;
	if (visit[y][x])return false;
	return true;
}
int main() {
	cin >> N >> M;
	for (int y=1; y <= N; y++) {
		for (int x = 1; x <= M; x++) {
			scanf_s("%1d", &in[y][x]);
		}
	}
	queue<int> qy, qx, qc;
	qy.push(1), qx.push(1), qc.push(1);
	int cnt = 0;
	while (qy.empty() == false) {
		int cy = qy.front(); qy.pop();
		int cx = qx.front(); qx.pop();
		int cc = qc.front(); qc.pop();
		if (visit[cy][cx])continue;
		visit[cy][cx] = 1;
		if (cy == N && cx == M ) {
			cnt = cc; break;
		}
		if(check(cy-1, cx))qy.push(cy - 1), qx.push(cx), qc.push(cc + 1);
		if (check(cy + 1, cx))qy.push(cy + 1), qx.push(cx), qc.push(cc + 1);
		if (check(cy, cx-1))qy.push(cy), qx.push(cx - 1), qc.push(cc + 1);
		if (check(cy, cx + 1))qy.push(cy), qx.push(cx + 1), qc.push(cc + 1);

	}
	printf("%d\n", cnt);

	return 0;
}
