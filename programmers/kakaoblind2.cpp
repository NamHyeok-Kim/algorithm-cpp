#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

vector<bool> visited(6);
string com = "";

void dfs(int s, int lev, int targetLev, string ordersj, map<string, int> &combinationNum)
{
    if(lev == targetLev) {  //탐색 끝
        for (int i = 0; i < ordersj.size(); i++) {
            if (visited[i] == true)com += ordersj[i];
        }
        combinationNum[com]++;
        com = "";
        return;
    }
    for (int i = s; i < ordersj.size(); i++)
    {
        if (visited[i] == true) continue;
        visited[i] = true;

        dfs(i, lev + 1, targetLev, ordersj, combinationNum);
        visited[i] = false;
    }

}

vector<string> solution(vector<string> orders, vector<int> course) {

    for(int i = 0 ; i < orders.size(); i++){
        sort(orders[i].begin(), orders[i].end());
    }

    vector<string> answer;
    for(int i = 0; i < course.size(); i++){  //각 course 에 따른 값 (최대10)
        map<string, int> combinationNum;

        for(int j = 0; j < orders.size(); j++){  //orders 의 문자열마다 조합 (최대1000)
            dfs(0, 0, course[i], orders[j], combinationNum);
        }
        int max = 0;
        for(auto p : combinationNum){
            if (max < p.second) max = p.second;
        }
        if(max == 1) continue;
        for(auto p : combinationNum)
            if(p.second >= max)
                answer.push_back(p.first);
    }
    sort(answer.begin(), answer.end());
    return answer;
}

int main()
{
    vector<string>ans = solution({"ABCFG", "AC", "CDE", "ACDE", "BCFG", "ACDEH"}, {2, 3, 4});
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << ' ';
    }
}
