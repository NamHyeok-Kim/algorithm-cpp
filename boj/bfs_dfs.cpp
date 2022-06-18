#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;
vector<vector<int>>adj;
vector<bool>visited;

void dfs(int now)
{
    cout << now + 1 << ' ';
    visited[now] = true;
    for(int i : adj[now]){
        if(!visited[i]) dfs(i);
    }

void bfs(int start)
{
    queue<int>q;
    q.push(start);
    visited[start] = true;
    while(!q.empty()) {
        int now = q.front();
        q.pop()n ;
        cout << now + 1 << ' ';
        for (int i : adj[now]) {
            if (!visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

int main()
{
    int n, m, v;
    int n1, n2;
    cin >> n >> m >> v;
    v-=1;
    adj.resize(n);
    visited.resize(n);

    for (int i = 0; i < m; i++) {
        cin >> n1 >> n2;
        n1--;
        n2--;
        adj[n1].push_back(n2);
        adj[n2].push_back(n1);
    }
    for (int i = 0; i < n; i++) {sort(adj[i].begin(), adj[i].end());}

    dfs(v);
    fill(visited.begin(), visited.end(), false);
    cout << '\n';
    bfs(v);

    return 0;
}