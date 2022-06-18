#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int dp[11], t;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i = 4; i < 11; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << dp[n];
    }
}