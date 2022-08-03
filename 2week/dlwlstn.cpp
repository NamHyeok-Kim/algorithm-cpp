#include <stdio.h>

int m[10][10] = {0}, check[10] = {0}, n, k, r[10][10];

void print()
{
    for(int i = 0; i < n; i++){
        printf("%d", r[i] + 1);
    }
    printf("\n");
}
void dfs(int oldnode, int node, int l)
{
    check[oldnode][node] = 1;
    check[node][oldnode] = 1;
    r[l] = node;
    if (l == n){
        print();
        check[oldnode][node] = 0;
        check[node][oldnode] = 0;
        return;
    }
    for(int i = 0; i < 6; i++){
        if(m[node][i] != 1 || check[i] != 1)
            dfs(i, l+1);
    }
    check[node] = 0;
}
int main()
{

    int a, b;
    scanf("%d%d", &n, &k);
    for(int i = 0; i < k; i++) {
        scanf("%d%d", &a, &b);
        a--; b--;
        m[a][b] = 1;
        m[b][a] = 1;
    }
    dfs(0, 0);
    return 0;
}
//6 9
//1 2
//1 3
//2 3
//2 5
//3 4
//3 5
//4 5
//4 6
//5 6