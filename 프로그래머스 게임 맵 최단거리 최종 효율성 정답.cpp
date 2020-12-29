#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>

using namespace std;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
struct node {
    int y, x, d;
    node(int yy, int xx, int dd) : y(yy), x(xx), d(dd) {}
    node() {}
};

int solution(vector<vector<int> > maps)
{   
    int answer = -1;
    int n = maps.size();
    int m = maps[0].size();
    
    vector<vector<bool>> v(n+1, vector<bool>(m+1, false));
    queue<node> q;
    q.push(node(0,0,1));
    v[0][0] = true;
    
    while(!q.empty()){
        node location = q.front();
        q.pop();
        if(location.y == n -1 && location.x == m -1){
            answer = location.d;
            break;
        }
        for(int i = 0; i<4; ++i){
            int tx = location.x + dx[i];
            int ty = location.y + dy[i];
            if(tx < 0 || tx >= m || ty < 0 || ty >= n || maps[ty][tx]==0) continue;
            if(v[ty][tx]) continue;
            v[ty][tx] = true;
            q.push(node(ty,tx, location.d+1));
        }
    }
    if(answer == 201){
        answer = -1;
    }
    return answer;
        
}

