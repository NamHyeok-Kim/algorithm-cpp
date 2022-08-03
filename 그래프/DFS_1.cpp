#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> int_nodes;
vector<int> visited;

int dfs(int s)
{
    visited[s] = 1;
    for(int i = 0; i < 1)
}

int main()
{
    int n, m, r;
    cin >> n >> m >> r;
    int_nodes.resize(n);
    visited.resize(n);
    for(int i = 0; i < m; i++){
        int n, v;
        cin >> n >> v;
        n--; v--;
        int_nodes[n].push_back(v);
        int_nodes[v].push_back(n);
    }
    for(int i = 0; i < int_nodes.size(); i++){
        sort(int_nodes[i].begin(), int_nodes[i].end());
    }
    dfs(v);

}