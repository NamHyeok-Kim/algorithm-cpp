#include <iostream>
#include <vector>

using namespace std;
vector<int> p;

int find(int n)
{ㅏ
    if (p[n] == n) return n;
    return p[n] = find(p[n]);
}
void marge(int x, int y)
{
    x = find(x);
    y = find(y);
    if(x < y) p[y] = x;
    else p[x] = y;
}
bool unionfind(int x, int y)
{
    return find(x) == find(y);
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i <= n; i++)
        p.push_back(i);
    for(int i = 0; i < m; i++) {
        int b, x, y;
        cin >> b >> x >> y;
        if(b == 0){
            marge(x, y);
        }
        else{
            if(unionfind(x, y)) cout << "YES\n";
            else cout << "NO\n";
        }
    }

}