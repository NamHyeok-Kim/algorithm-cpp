#include <iostream>
#include <vector>

using namespace std;

vector<long long> s;
vector<int> cost;
int main()
{
    int n;
    cin >> n;
    s.resize(n);
    cost.resize(n);

    for(int i = 0; i < n-1; i++){
        cin >> s[i];
    }
    for(int i = 0; i < n; i++){
        cin >> cost[i];
    }
    int greedy = 1000000000;
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(cost[i] < greedy)
            greedy = cost[i];
        sum += greedy * s[i];
    }
    cout << sum

}