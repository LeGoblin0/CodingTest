#include<vector>
#include<queue>
#include<iostream>

using namespace std;
int dy[] = { 0,0,1,-1 };
int dx[] = { 1,-1,0,0 };
bool visit[100][100];

int solution(vector<vector<int> > maps)
{   
    int answer = 1;
    int n = maps.size();
    int m = maps[0].size();
        
    queue<pair<int, int>> q;
    q.push(make_pair(0,0));
    visit[0][0] = true;
    
    while(!q.empty()){
        int size = q.size();
        while(size--){
            int x = q.front().first;
            int y = q.front().second;
            if(y==n -1 &&x==m-1) return answer;
            for(int i = 0; i<4; i++){
            int ty = y + dy[i];
            int tx = x + dx[i];
            if(ty < 0 || tx < 0 || ty >= n || tx >= m || !maps[ty][tx] || visit[ty][tx]) continue;
            q.push(make_pair(ty,tx));
            visit[ty][tx] = 1;
        }
        }answer++;
    }
    return -1;
}

