#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> dari(n);
    for(int i = 0; i < n; i++){
        cin >> dari[i].first >> dari[i].second;
    }
    int dp[n];
    dp[0] = 1;
    int maxx;
    for(int i = 0; i < n; i++){
        maxx = 0;
        for(int j = 0; j < i; j++){
            if(dari[i].second > dari[j].second && dp[j] > maxx) {
                maxx = dp[j];

            }

        }
        dp[i] = maxx+1;

    }
    int maxxx = 0;
    for(int i = 0; i < n; i++){
        if(maxxx < dp[i]) maxxx = dp[i];
    }
    cout << maxxx;

}

