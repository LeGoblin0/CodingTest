#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string,int> d;
    for(int i = 0; i < clothes.size(); i++){
        d[clothes[i][1]]++;
    }
    for(auto it = d.begin(); it!= d.end(); it++){
        answer *=  (it->second+1);
    }
    answer--;
    return answer;
}