#include <iostream>
#include <vector>
#include <queue>
#define inf 987654321

using namespace std;
vector<vector<vector<pair<int, int>>>> town;

vector<vector<int>> d;

void dijkstra(int start, int fs)
{
    d[fs][start] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push(make_pair(0, start));
    while(!pq.empty()){
        int now = pq.top().second;
        int dis = -pq.top().first;
        pq.pop();
        if(d[fs][now] < dis)continue;
        for(int i = 0; i < town[fs][now].size(); i++){
            int next = town[fs][now][i].second;
            int nd = dis + town[fs][now][i].first;
            if(nd < d[fs][next]){
                d[fs][next] = nd;
                pq.push(make_pair(-nd, next));
            }
        }
    }
}
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x, m;
    cin >> n >> m >> x;
    town.resize(2, vector<vector<pair<int, int>>>(n));
    d.resize(2, vector<int>(n, inf));
    for(int i = 0; i < m; i++){
        int n1, n2, t;
        cin >> n1 >> n2 >>t;
        n1--;
        n2--;
        town[0][n1].push_back(make_pair(t,n2));
        town[1][n2].push_back(make_pair(t,n1));

    }
    dijkstra(x-1, 0);
    dijkstra(x-1, 1);

    int  r[n], maxr = 0;
    for(int i = 0; i < n; i++){
        if(d[0][i] == inf or d[1][i] == inf) continue;
        r[i] = d[0][i] + d[1][i];
        maxr = max(maxr, r[i]);
    }

    cout << maxr;
}