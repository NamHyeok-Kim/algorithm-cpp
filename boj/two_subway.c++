#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> a[3001];
int check[3001], dist[3001], n;


int cycle_found(int x, int p) { //사이클 구하기(DFS)
    if (check[x] == 1) {
        return x;
    }
    check[x] = 1;
    for (int i : a[x]) {
        if (i == p) continue;   //이전 정점으로 돌아가는 경우를 없엔다
        int res = cycle_found(i, x);//재귀
        if (res == -2) return -2;
        if (res >= 0) {       //0이상이면 사이클 위에 있는 정점
            check[x] = 2;     //이 정점은 사이클에 포함됨
            if (x == res) return -2;
            else return res;
        }
    }
    return -1;
}

void no_cycle(){
    queue<int> q;
    for (int i = 0; i < n; i++) {

        if (check[i] == 2) {
            q.push(i);      //사이클 위에 있다면 0
        }
        else {
            dist[i] = -1;  //사이클 위에 없다면 -1
        }
    }

    while (!q.empty()) {    //큐 가 빌 때까지 반복
        int x = q.front(); q.pop();
        for (int y : a[x]) {
            if (dist[y] == -1) {          //방문하지 않았다면(-1이라면)
                q.push(y);                // 큐 에 넣고
                dist[y] = dist[x] + 1;   //거리를 늘린다(0으로 만든다)
           }
        }
    }
}

int main() {

    cin >> n;

    for (int i = 0; i < n; ++i) {    //백터 a 에 역을 담는다
        int b, c;
        cin >> b >> c;
        b -= 1;
        c -= 1;

        a[b].push_back(c);
        a[c].push_back(b);
    }
    cycle_found(0, -1);
    no_cycle();

    for (int i = 0; i < n; ++i)
        cout << dist[i] << ' ';
    cout << '\n';
}
