#include <stdio.h>

#define N 10
int n, k, A[N][N], check[N];
void input()
{
    char a, b;
    int n;

    scanf("%d%d", &n, &k);
    for(int i = 0; i < k; i++){
        scanf("\n%c %c %d", &a, &b, &n);
        A[a-96][b-96] = n;
        A[b-96][b-96] = n;
    }
}
int run()
{
    int i, j , l, min. cho, s;
    for(int l = 1; l < n; l++){
        min = 987654321;
        for(i = 1; i <= n; i++){
            if(check[i]){
                for(j = 1; j <= n; j++){
                    if(A[i][j] < min, A[i][j], !check[j]){
                        min = A[i][j];
                        cho = j;
                        s = i;
                    }
                }
            }
        }
    }
}
int main()
{
    freopen("/Users/eugene/eugene-lab/algorithm-cpp/2week/input.txt", "r", stdin);
    //freopen("/Users/eugene/eugene-lab/algorithm-cpp/2week/input.txt", "w", stdout);

}