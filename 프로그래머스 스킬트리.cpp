#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    
    for (int i = 0; i<skill_trees.size(); i++){ //스킬트리 갯수만큼 반복
        string skillTest = skill_trees[i];   //스킬트리 요소 하나씩 스킬 테스트 스트링에 넣고
        string temp = "";
        for(int j = 0; j< skillTest.size();j++){ //스킬 테스트와 스킬 2중 포문으로 비교
            for(int k = 0; k<skill.size(); k++){
                if(skillTest[j]==skill[k]){             //스킬 테스트의 0부터 순서대로 스킬과 비교하여 같으면 temp에 추가한다
                temp += skillTest[j];                    // temp를 완성한다.
              }
            }
        }
        for(int i = skill.size(); i >=0; i--){         //cbd 부터 cb c 를 차례로 temp 와 비교한다.
        if(skill.substr(0,i)==temp) answer++; // 순서가 맞으면 answer ++
        }
    }
    return answer;
}