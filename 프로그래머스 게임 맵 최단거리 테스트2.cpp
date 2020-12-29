#include<vector>
#include<queue>
#include<iostream>

using namespace std;
int in[101][101]{0,};
int visit[101][101]{0,};


int solution(vector<vector<int> > maps)
{   
    int n = maps.size();
    int m = maps[0].size();
    for(int i = 0; i< n; i++){
        for(int j = 0; j<m; j++){
            in[i][j]=maps[i][j];
        }
    }
    int answer = 0;
    
    queue<pair<int, int>> q;
    q.push(make_pair(0,0));
    visit[0][0] = true;
    
    while(!q.empty()){
        answer++;
        int size = q.size();
        for(int i = 0; i< size; i++){
            int x = q.front().first;
            int y = q.front().second;
            if(x == n-1 && y == m-1) return answer;
            if(x != 0 && !visit[x-1][y] && in[x-1][y]){
                visit[x-1][y] = true;
                q.push(make_pair(x-1, y));
            }
            if(x != n && !visit[x-1][y] && in[x+1][y]){
                visit[x+1][y] = true;
                q.push(make_pair(x+1, y));
            }
            if(y != 0 && !visit[x][y-1] && in[x][y-1]){
                visit[x][y-1] = true;
                q.push(make_pair(x, y-1));
            }
            if(y != m && !visit[x][y+1] && in[x][y+1]){
                visit[x][y+1] = true;
                q.push(make_pair(x, y+1));
            }
            q.pop();
        }
    }
}
