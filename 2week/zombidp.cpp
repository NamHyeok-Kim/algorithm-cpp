#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int zombi[n];
    int dp[n];
    dp[0] = 1;
    for(int i = 0; i < n; i++){
        cin >> zombi[n];
    }
    for(int i = 1; i < n; i++){
        int maxx = 0;
        for(int j = i-1; j > 0; j++){
            if(zombi[j] > zombi[i] && )
        }
    }

}