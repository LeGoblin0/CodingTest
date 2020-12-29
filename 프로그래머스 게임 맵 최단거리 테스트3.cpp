#include<vector>
#include<queue>
#include<iostream>

using namespace std;
int n=0, m=0;
int in[101][101];
int visit[101][101];
bool check(int y, int x){
   if (y<1 || y>n || x<1 || x>m)return false;
	if (in[y][x] == 0)return false;
	if (visit[y][x])return false;
	return true;
}

int solution(vector<vector<int> > maps)
{   
    n = maps.size();
    m = maps[0].size();
    for(int y = 1; y<= n; y++){
        for(int x = 1; x<=m; x++){
            in[x][y]=maps[y][x];
        }
    }
    int answer = 0;
    queue<int> qy, qx, qc;
    qy.push(1), qx.push(1), qc.push(1);
    int cnt = 0;
    while(qy.empty()==false){
        int cy = qy.front(); qy.pop();
		int cx = qx.front(); qx.pop();
		int cc = qc.front(); qc.pop();
		if (visit[cy][cx])continue;
		visit[cy][cx] = 1;
		if (cy == n && cx == m ) {
			cnt = cc;cout<<cnt; break;
		}
		if(check(cy-1, cx))qy.push(cy - 1), qx.push(cx), qc.push(cc + 1);
		if(check(cy + 1, cx))qy.push(cy + 1), qx.push(cx), qc.push(cc + 1);
		if(check(cy, cx-1))qy.push(cy), qx.push(cx - 1), qc.push(cc + 1);
		if(check(cy, cx + 1))qy.push(cy), qx.push(cx + 1), qc.push(cc + 1);
    }
    
    answer = cnt;
    cout<<answer;
    return answer;
}
