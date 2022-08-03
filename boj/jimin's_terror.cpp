#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<pair<int, int>> p;

int ccw(pair<int, int> p1, pair<int, int> p2, pair<int, int> p3)
{
    int v = (p1.first*p1.second+p2.first*p3.second+p3.first*p1.second)-(p1.second*p2.first+p2.second*p3.first+p3.second*p1.first);
    if(v < 0) return -1;
    if(v > 0) return 1;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    p.resize(n);
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> p[i].first >> p[i].second;
    }
    for(int i = 0; i < 3; i++)q

    int xx, yy;
    cin >> xx >> yy;
    for (int i = 1; i < n; i++) {
        int a = ccw(p[i - 1], p[i], make_pair(xx, yy)) * ccw(p[i - 1], p[i], make_pair(xx, 987654321));
        int b = ccw(make_pair(xx, yy), make_pair(xx, 987654321), p[i - 1]) *
                ccw(make_pair(xx, yy), make_pair(xx, 987654321), p[i]);
        if (a * b >=0 &&)
    }
}