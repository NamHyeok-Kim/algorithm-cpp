#include <stdio.h>

int n, k, dist[10], A[10][10], check[10];
void input() {
    int i, j, a, b, c;
    scanf("%d%d", &n, &k);
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            if (i == j)continue;
            A[i][j] = 987654321;
        }
    }
    for (i = 1; i <= k; i++) {
        scanf("%d%d%d", &a, &b, &c);
        A[a][b] = c;
        A[b][a] = c;
    }
}
void set()
{
    for (int i = 0; i <= n; i++){
        dist[i] = a[1][i];
    }
}

void run()
{
    int MIN = 987654321;
    for(int j = 1; j < n; j++){
        for(int i = 0; i < n; i++){
            if(MIN > dist[i] && !check[i] && dist[i]){

            }
        }


    }
}
int main()
{

}