#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> stair;
    for (int i = 0; i < n; i++) {
        int ipt;
        cin >> ipt;
        stair.push_back(ipt);
    }
    vector<vector<int>> dp(n, vector<int>(2));
    dp[0][0] = 0;
    dp[0][1] = stair[0];
    dp[1][1] = stair[1];
    // 윗줄은 한칸만 아랫줄은 둘다



}