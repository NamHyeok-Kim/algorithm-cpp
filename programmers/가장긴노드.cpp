#include <string>
#include <vector>

using namespace std;
vector<int> d;
void dfs(int now, int cnt, vector<vector<int>>edge)
{
    d[now] = cnt;
    for(int i : edge[now]){
        if(d[i] != 0) dfs(i, cnt+1, edge);
    }
}

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    dfs(1, 0, edge);
    int m = *max_element(d.begin(), d.end());
    for(int i = 0; i < d.size(); i++){
        if(i == m){
            answer++;
        }
    }

    return answer;
}