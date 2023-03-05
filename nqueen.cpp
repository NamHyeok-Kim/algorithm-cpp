#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> board;
vector<int> checkHoriz, checkDiag1, checkDiag2; //수직, 대각선1, 대각선2 검사
int N, cnt = 0;

void dfs(int level, int horiz)
{
    /*
    for(int i = 0; i < N; i++) {
        if (board[level - N][horiz - N] == 1) {
            return;
        }
    }
    for(int i = 0; i < N; i++){
        if (board[level][horiz-N] == 1){
            return;
        }
    }
    for(int i = 0; i < N; i++){
        if (board[level][horiz-N] == 1){
            return;
        }
    }
    */ //for문
    if(checkHoriz[horiz] || checkDiag2[level-horiz+N-1] || checkDiag1[level+horiz]){
        return;
    }
    checkHoriz[horiz] = 1;
    checkDiag1[level+horiz] = 1;
    checkDiag2[level-horiz+N-1] = 1;



    board[level][horiz] = 1;
    for (int i = 0; i < N; i++){
        dfs(level+1, i);
    }
    checkHoriz[horiz] = 0;
    checkDiag1[level+horiz] = 0;
    checkDiag2[level-horiz+N-1] = 0;
    if(level == N-1){
        cnt++;
    }
}

int main()
{
     cin >> N;
     board.resize(N, vector<int>(N));
     checkHoriz.resize(N,0);
     checkDiag1.resize(N+N,0);
     checkDiag2.resize(N+N-1,0);
     for(int i=0;i<N;i++)
        dfs(0, i);
     cout<< cnt;
}