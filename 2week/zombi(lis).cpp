#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int zombi[n];
    vector<int>lis;
    for(int i = 0; i < n; i++){
        cin >> zombi[i];
    }
    lis.push_back(zombi[0]);
    for(int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (lis[j] > zombi[i])lis[i - 1] = zombi[i] continue;zx
            else lis.push_back(zombi[i]);
        }
    }
    for(int i = 0; i < n; i++){
        cout << lis[i] << ' ';
    }
}