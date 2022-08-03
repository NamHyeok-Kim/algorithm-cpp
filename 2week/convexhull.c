#include <stdio.h>
#include <algorithm>

#define N 20
int n;
int check[N];
using namespace std;
struct abc {
    int x, y;
} DATA[N];

bool compare(const abc &i, const abc &j) {
if (i.x == j.x)return i.y > j.y;
return i.x < j.x;
}

int ccw(int x1, int y1, int x2, int y2, int x3, int y3) {
    int temp;
    temp = (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
    if (temp < 0)return -1;
    else if (temp > 0)return 1;
    else return 0;
}

void input() {
    int i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d%d", &DATA[i].x, &DATA[i].y);
    }
    sort(DATA + 1, DATA + n + 1, compare);
}


int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int x1, y1, x2, y2, x3, y3;
    input(); //입력 받습니다.
    run(); //알고리즘
    print(); //선택된 정점 출력
    return 0;
}