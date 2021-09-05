#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int M, N, H;
vector<vector<int>> box;

int bfs()
{
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    queue<pair<int, int>> q;
    while (!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (0 <= nx && ny < M && 0 <= ny && nx < N && box[nx][ny] == 0){

            }
    }

}

int main()
{
    cin >> M >> N;
    box.resize(M, vector<int>(N));

    //vector<vector<vector<int>>> a(N, vector<vector<int>>(M, vector<int>(N)))
    //(N, vector<vector<int>>(M, vector<int>(N)))

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            int tomato;
            cin >> tomato;
            box[i][j] = tomato;
        }
    }
    bfs();
}

