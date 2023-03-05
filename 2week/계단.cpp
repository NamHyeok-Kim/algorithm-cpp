#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> h(n);
    h.push_back(0);
    for(int i = 1; i <= n; i++){
        cin >> h[i];
    }
    vector<int> dp(n);

    for(int i = 2; i <= n; i+=2){
        dp[i] += max(h[i], h[i-1]);
    }
    cout << dp[n];
}