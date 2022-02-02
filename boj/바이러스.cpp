#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> net;
vector<bool> visited;
int cnt = 0;

void dfs(int now)
{

    visited[now] = true;
    for(int i : net[now]){
        if(!visited[i]){cnt++;dfs(i);}
    }
}

int main()
{
    int c, n;
    cin >> c >> n;
    net.resize(c);
    visited.resize(c);
    for(int i = 0; i < n; i++){
        int n1, n2;
        cin >> n1 >> n2;
        n1--; n2--;
        net[n1].push_back(n2);
        net[n2].push_back(n1);
    }
    dfs(1);
    cout << cnt;
}