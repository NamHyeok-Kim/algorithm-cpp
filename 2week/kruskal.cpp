#include <stdio.h>

#define N 10
int a[N][N], n, check[N];

void input()
{
    char a, b;
    int n;

    scanf("%d%d", &n, &k);
    for (int i = 0; i < k; i++) {
        scanf("\n%c %c %d", &a, &b, &n);
        a[a - 96][b - 96] = n;
        a[b - 96][b - 96] = n;
    }
}

struct abc {
    int s, e, v;
} B[N * 2];

void set()
{
    int i, j;
    for (int i = 0; i <= n; i++) {
        check[i] = i;
    }
    for (i = 0; i <= n; i++){

    }
}

int union_find(int po)
{
    if (po == check[po])return po;
    return po = check[po];
}

bool compare(const abc &a, const abc &b)
{
    return a.v < b.v;
}
int run()
{
    int i, temp1, temp2, count = 0;
    for(i = 0; i < cnt; i++){
        temp1 = union_find(B[i].s);
        temp2 = union_find(B[i].e);
        if(temp1 == temp2)continue;
        check[temp1] = temp2;
        count++;
        a[B[i].s][B[i].e] = B[i].v;
        a[B[i].e][B[i].s] = B[i].v;
    }
}
int main() {
    freopen("/Users/eugene/eugene-lab/algorithm-cpp/2week/input.txt", "r", stdin);
    //freopen("/Users/eugene/eugene-lab/algorithm-cpp/2week/input.txt", "w", stdout);
    input();
    run();
    mn

    return 0;
}