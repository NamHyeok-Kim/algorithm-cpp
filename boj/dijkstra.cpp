#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define INF 200001

using namespace std;
vector<vector<pair<int, int>>> node;
vector<int>d;

void dijkstra(int start) {
    d[start] = 0;
    priority_queue<pair<int, int>> q;
    q.push(make_pair(0, start));
    while (!q.empty()) {
        int now = q.top().second;
        int dis = -q.top().first;
        q.pop();
        if(d[now] < dis)continue;

        for(int i = 0; i < node[now].size(); i++){
            int next = node[now][i].second;
            int NextDistance = dis + node[now][i].first;
            if(NextDistance < d[next]){
                d[next] = NextDistance;
                q.push(make_pair(-NextDistance, next));
            }
        }
    }
    for(int i : d){
        if(i == INF){ cout << "INF" << ' '; continue;}
        cout << i << ' ';
    }

}

int main()
{;
    //입출력 가속
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int v, e, k;
    cin >> v >> e >> k;
    d.resize(e, INF);
    node.resize(e);
    for(int i = 0; i < e; i++){
        int n1, n2, l;
        cin >> n1 >> n2 >>l;
        n1--;
        n2--;
        node[n1].push_back(make_pair(l,n2));
    }
    dijkstra(k-1);
}