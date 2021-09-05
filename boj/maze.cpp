#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<vector<int>> maze;
int n, cnt = 0, shorter = 100;

void dfs(int x, int y)
{
    if (y == n - 1 && x == n - 1) {
        if(cnt < shorter) {
            shorter = cnt;
        }
        cnt--;
        return;
    }
    maze[x][y] = 0;
    cnt++;

    if (y > 0 && maze[y - 1][x] == 1) dfs(y - 1, x);
    if (y < n - 1 && maze[y + 1][x] == 1) dfs(y + 1, x);
    if (x > 0 && maze[y][x - 1] == 1) dfs(y, x - 1);
    if (x < n - 1 && maze[y][x + 1] == 1) dfs(y, x + 1);
    maze[x][y] = 1;
    cnt--;
}

int main()
{
    string input;
    cin >> n;
    maze.resize(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        cin >> input;
        for (int j = 0; j < n; j++) {
            maze[i][j] = input.at(j) - 48;
        }
    }

    dfs(0, 0);
    cout << shorter;

    return 0;
}

/*
    5
    11100
    00111
    11101
    10001
    11111
 */