#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;
vector<vector<int>> grid;
vector<vector<int>> visited;
int k;

int noname(int x, int y)
{
    visited[x][y] == 0;

}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n >> k;
        grid.resize(3, vector<int>(3));
        visited.resize(3, vector<int>(3));

        for(int i = 0; i < n; i++){
             for(int j = 0; j < n; j++){
                 char c;
                 cin >> c;
                 if(c == '.') grid[i][j] = 1;
                 else grid[i][j] = 0;
             }
        }
        noname(0, 0);
    }
}
