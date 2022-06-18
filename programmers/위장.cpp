#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> m;
    for(int i = 0; i < clothes.size(); i++){
        m.insert(make_pair(clothes[i][1], 1));
    }
    for(int i = 0; i < clothes.size(); i++) {
        m[clothes[i][2]]+=1;
    }
    for(auto i : m){
        answer *= i.second+1;
    }
    return answer-1;
}