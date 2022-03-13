#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

vector<int> c;
vector<bool> p;
int s, k;

void dfs(int x, int i)
{
    if(i == k) {
        if (x >= 1)p[x] = true;
    }

    else{
         dfs(x, i + 1);
         dfs(x + c[i], i + 1);
         dfs(x - c[i], i + 1);
    }
}
int main()
{
    cin >> k;
    c.resize(k, 0);

    for(int i = 0; i < k; i++){
        cin >> c[i];
        s += c[i];
    }
    p.resize(s + 1, false);
    dfs(0, 0);
    int cnt = 0;
    for(int i = 1; i < s; i++){
         if(!p[i]) cnt++;
    }

    cout << cnt;
}