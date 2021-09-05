#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> city;
vector<vector<bool>> visited;
int N;

void dfs(int now)
{
    visited[now] = true;
    for (int i : city[now]) {
        if (!visited[i]) dfs(i);
    }
}

int main()
{
    cin >> N;
    city.resize(N, vector<int>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> city[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        dfs(i);
        fill(visited.begin(), visited.end(), false);
    }
}