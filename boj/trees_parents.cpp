#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> adj;
vector<bool> visited;
vector<int>parents;

void dfs(int now)
{
    visited[now] = true;

    for(int i : adj[now]){
        if(!visited[i]){
            parents[i] = now;
            dfs(i);
        }
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int N;
    cin >> N;

    adj.resize(N + 1);
    parents.resize(N + 1);
    visited.resize(N + 1);

    for(int i = 0; i < N-1; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);

    for (int i = 2; i <= N; i++)
        cout << parents[i] << "\n";
}